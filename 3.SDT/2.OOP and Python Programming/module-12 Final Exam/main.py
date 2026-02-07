# main.py
from food_item import FoodItem
from restaurant import Restaurant
from user import Admin, Customer

jk_restaurant = Restaurant()
jk_restaurant.add_admin(Admin('Default Admin', 'admin@gmail.com'))

# Value Insert Manually
default_admin = jk_restaurant.login('admin@gmail.com', 'admin')
default_admin.add_item(jk_restaurant, FoodItem('Rice', 20, 50))
default_admin.add_item(jk_restaurant, FoodItem('Dal', 10, 150))
default_admin.add_item(jk_restaurant, FoodItem('Water', 15, 100))
default_admin.add_item(jk_restaurant, FoodItem('Lemon Water', 20, 50))
default_admin.add_customer(jk_restaurant, Customer('A. Rahim', 'a.rahim@gmail.com', 'Gulsan 2'))
default_admin.add_customer(jk_restaurant, Customer('A. Halim', 'a.halim@gmail.com', 'Mirpur 2'))

def main_menu():
    while True:
        print('--- Restaurant Management System ---')
        print('1. Admin Login')
        print('2. Customer Login')
        print('3. Exit')

        option = int(input("Select an option: "))

        if option == 1:
            email = input("Enter admin email: ")
            admin = jk_restaurant.login(email, 'admin')
            if admin:
                admin_menu(admin)
            else:
                print("\nInvalid Admin!\n")
        elif option == 2:
            email = input("Enter customer email: ")
            customer = jk_restaurant.login(email, 'customer')
            if customer:
                customer_menu(customer)
            else:
                print("\nInvalid customer!\n")
        elif option == 3:
            print("Exit!")
            break
        else:
            print('Invalid Option!')

def customer_menu(customer):
    print(f"\nWellcome back {customer.name}")
    while True:
        print("--- Customer Menu ---")
        print("1. View Restaurant Menu")
        print("2. View Balance")
        print("3. Add Balance")
        print("4. Add Item to Cart")
        print("5. Remove from Cart")
        print("6. View Cart")
        print("7. Place Order")
        print("8. View Past Orders")
        print("9. Back to Main Menu")

        option = int(input("Enter an option: "))
        if option == 1:
            customer.view_menu(jk_restaurant)
        elif option == 2:
            print(f"\nAvailable Balance: {customer.check_balance}\n")
        elif option == 3:
            amount = int(input("Enter the amount: "))
            response = customer.add_funds(amount)
            print(f"\n{response}\n")
        elif option == 4:
            name = input("Enter item name: ")
            quantity = int(input("Enter item quantity: "))
            response = customer.add_to_cart(jk_restaurant,name, quantity)
            print(f"\n{response}\n")
        elif option == 5:
            name = input("Enter item name: ")
            response = customer.remove_to_cart(jk_restaurant, name)
            print(f"\n{response}\n")
        elif option == 6:
            customer.view_cart()
        elif option == 7:
            response = customer.place_order()
            print(f"\n{response}\n")
        elif option == 8:
            customer.order_history()
        elif option == 9:
            break

def admin_menu(admin):
    print(f"\nWelcome Admin : {admin.name}\n")
    while True:
        print('--- Admin Menu ---')
        print('1. Create customer Account')
        print('2. Remove Customer Account')
        print('3. View All Customer')
        print('4. Manage Restaurant Menu')
        print('5. Back to Main Menu')

        option = int(input('Select an option: '))

        if option == 1:
            name = input("Enter customer name: ")
            email = input("Enter customer email: ")
            address = input("Enter customer address: ")
            customer = Customer(name, email, address)
            response = admin.add_customer(jk_restaurant, customer)
            print(f"\n{response}\n")
        elif option == 2:
            email = input("Enter customer email: ")
            response = admin.remove_customer(jk_restaurant, email)
            print(f"\n{response}\n")
        elif option == 3:
            admin.view_customers(jk_restaurant)
        elif option == 4:
            manage_restaurant_menu(admin)
        elif option == 5:
            break
        else:
            print('Invalid Option!')

def manage_restaurant_menu(admin):
    
    while True:
        print('--- Manage Restaurant Menu ---')
        print('1. Add Menu Item')
        print('2. Remove Menu Item')
        print('3. Update Item Price')
        print('4. View Menu Items')
        print('5. Back to Admin Menu')

        option = int(input("Enter an option: "))

        if option == 1:
            name = input("Enter item name: ")
            price = int(input("Enter item price: "))
            quantity = int(input("Enter item quantity: "))

            item = FoodItem(name, price, quantity)
            response = admin.add_item(jk_restaurant, item)
            print(f"\n{response}\n")
        elif option == 2:
            name = input("Enter item name: ")
            response = admin.remove_item(jk_restaurant, name)
            print(f"\n{response}\n")
        elif option == 3:
            name = input("Enter item name: ")
            price = int(input("Enter item new price: "))
            response = admin.update_item_price(jk_restaurant, name, price)
            print(f"\n{response}\n")
        elif option == 4:
            admin.view_menu(jk_restaurant)
        elif option == 5:
            break
        else:
            print('Invalid Option!')

# Start Application
main_menu()