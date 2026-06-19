from django.shortcuts import render, redirect
from django.http import HttpResponse
from tasks.forms import TaskForm, TaskModelForm, TaskDetailForm
from tasks.models import Employee, Task, TaskDetail, Project
from datetime import date
from django.db.models import Q, Count, Max, Min, Avg
from django.contrib import messages

def manager_dashboard(request):
    type = request.GET.get('type', 'all')
    
    base_query = Task.objects.select_related('details').prefetch_related('assigned_to')

    if type == 'completed':
        tasks = base_query.filter(status = 'COMPLETED')
    elif type == 'in-progress':
        tasks = base_query.filter(status = 'IN_PROGRESS')
    elif type == 'pending':
        tasks = base_query.filter(status = 'PENDING')
    elif type == 'all':    
        tasks = base_query.all()

    counts = Task.objects.aggregate(
        total=Count('id'),
        completed=Count('id', filter=Q(status='COMPLETED')),
        in_progress=Count('id', filter=Q(status='IN_PROGRESS')),
        pending=Count('id', filter=Q(status='PENDING'))
    )

    context = {
        "tasks": tasks,
        "counts": counts
    }
    return render(request, "dashboard/manager-dashboard.html", context)

def user_dashboard(request):
    return render(request, "dashboard/user-dashboard.html")

def test_page(request):
    return render(request, "test.html")

''' Django Model Form '''
def create_task(request):
    task_form = TaskModelForm()
    task_detail_form = TaskDetailForm()
    context = {"task_form": task_form, "task_detail_form": task_detail_form}

    if request.method == 'POST':
        task_form = TaskModelForm(request.POST)
        task_detail_form = TaskDetailForm(request.POST)

        if task_form.is_valid() and task_detail_form.is_valid():
            task = task_form.save()
            task_detail = task_detail_form.save(commit=False)
            task_detail.task = task
            task_detail.save()

        messages.success(request, "Task Created Successfully")
        return redirect('create-task')
    
    return render(request, "task_form.html", context)

def update_task(request, id):
    task = Task.objects.get(id = id)
    task_form = TaskModelForm(instance = task)
    if hasattr(task, 'details'):
        task_detail_form = TaskDetailForm(instance = task.details)
    else:
        task_detail_form = TaskDetailForm()

    context = {"task_form": task_form, "task_detail_form": task_detail_form}

    if request.method == 'POST':
        task_form = TaskModelForm(request.POST, instance = task)
        if hasattr(task, 'details'):
            task_detail_form = TaskDetailForm(request.POST, instance = task.details)
        else:
            task_detail_form = TaskDetailForm(request.POST)

        if task_form.is_valid() and task_detail_form.is_valid():
            task = task_form.save()
            task_details = task_detail_form.save(commit=False)
            task_details.task = task 
            task_details.save()

        messages.success(request, "Task Updated Successfully")
        return redirect('update-task', id)
    
    return render(request, "task_form.html", context)

def delete_task(request, id):
    if request.method == 'POST':
        task = Task.objects.get(id= id)
        task.delete()
        
        messages.success(request, 'Task Deleted Successfully')
        return redirect('manager-dashboard')
    else:
        messages.error(request, 'Something went wrong.')
        return redirect('manager-dashboard')

def view_task(request):
    
    projects = Project.objects.annotate(num_task=Count('task')).order_by('num_task')
    return render(request, "show_task.html", {'projects': projects})