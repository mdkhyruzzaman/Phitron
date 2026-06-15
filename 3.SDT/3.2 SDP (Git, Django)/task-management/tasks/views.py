from django.shortcuts import render
from django.http import HttpResponse
from tasks.forms import TaskForm, TaskModelForm
from tasks.models import Employee, Task

# Create your views here.
def manager_dashboard(request):
    return render(request, "dashboard/manager-dashboard.html")

def user_dashboard(request):
    return render(request, "dashboard/user-dashboard.html")

def test_page(request):
    return render(request, "test.html")

''' Django Normal Form '''
# def create_task(request):
#     employees = Employee.objects.all()
#     form = TaskForm(employees=employees)

#     if request.method == 'POST':
#         form = TaskForm(request.POST, employees=employees)
#         if form.is_valid():
#             data = form.cleaned_data
#             title = data.get('title')
#             description = data.get('description')
#             due_date = data.get('due_date')
#             assigned_to = data.get('assigned_to')

#             task = Task.objects.create(title=title, description=description, due_date=due_date)

#             # Assigned To
#             for emp_id in assigned_to:
#                 employee = Employee.objects.get(id=emp_id)
#                 task.assigned_to.add(employee)

#             return HttpResponse("Task Added Successfully.")

#     context = {"form": form}
#     return render(request, "task_form.html", context)

''' Django Model Form '''
def create_task(request):
    form = TaskModelForm()
    context = {"form": form}

    if request.method == 'POST':
        form = TaskModelForm(request.POST)
        form.save()
        context = {"form": form, "message": "Task Added Successfully."}

    return render(request, "task_form.html", context)


def view_task(request):
    # retrive all data from tasks model
    tasks = Task.objects.all()

    # retrive a specific task
    task_3 = Task.objects.get(id = 3)

    #Fetch the first task
    first_task = Task.objects.first()
    return render(request, "show_task.html", {"tasks": tasks, "task3": task_3, "first_task": first_task})