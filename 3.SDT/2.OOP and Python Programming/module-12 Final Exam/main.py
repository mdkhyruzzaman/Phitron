from food_item import FoodItem
from restaurant import Restaurant
from user import Admin, Customer

jk_restaurant = Restaurant()
jk_restaurant.add_admin(Admin('Default Admin', 'admin@gmail.com'))
admin : Admin = jk_restaurant.login('admin@gmail.com', 'admin')

admin.add_item(jk_restaurant, FoodItem('Rice', 20, 50))
admin.add_item(jk_restaurant, FoodItem('Dal', 10, 150))
admin.add_item(jk_restaurant, FoodItem('Water', 15, 100))
admin.add_item(jk_restaurant, FoodItem('Lemon Water', 20, 50))
admin.update_item_price(jk_restaurant, 'Rice', 30)
admin.view_menu(jk_restaurant)
admin.add_customer(jk_restaurant, Customer('A. Rahim', 'a.rahim@gmail.com', 'Gulsan 2'))

customer : Customer = jk_restaurant.login('a.rahim@gmail.com', 'customer')
customer.view_menu(jk_restaurant)