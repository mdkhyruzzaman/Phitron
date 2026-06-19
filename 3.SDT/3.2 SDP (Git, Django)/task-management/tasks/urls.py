from django.urls import path
from tasks.views import manager_dashboard, user_dashboard, test_page, create_task, view_task, update_task, delete_task

urlpatterns = [
    path('manager-dashboard/', manager_dashboard, name = 'manager-dashboard'),
    path('user-dashboard/', user_dashboard),
    path('test-page/', test_page),
    path('create-task/', create_task, name='create-task'),
    path('update-task/<int:id>/', update_task, name='update-task'),
    path('delete-task/<int:id>/', delete_task, name='delete-task'),
    path('view-task/', view_task)
]