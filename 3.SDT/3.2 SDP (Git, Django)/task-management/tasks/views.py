from django.shortcuts import render, HttpResponse

# Create your views here.
def home(request):
    return HttpResponse("Welcome to Django.")

def contact(request):
    return HttpResponse("<h1>Welcome to Contact Page</h1>")

def show_tasks(request):
    return HttpResponse("Tasks List")