from django.contrib import admin
from django.urls import path, include
import tasks.urls
import users.urls
from core.views import home
from debug_toolbar.toolbar import debug_toolbar_urls

urlpatterns = [
    path('home', home, name='home'),
    path('admin/', admin.site.urls),
    path('tasks/', include(tasks.urls)),
    path('users/', include(users.urls))
] + debug_toolbar_urls()
