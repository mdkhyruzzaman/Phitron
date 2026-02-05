from abc import ABC
from order import Order

class User(ABC):
    def __init__(self, name, email):
        self.name = name
        self.email = email

class Admin(User):
    def __init__(self, name, email):
        super().__init__(name, email)

    # Managing the restautant menu
    def add_item(self, restaurant, item):
        restaurant.menu.add_item(item)
    
    def remove_item(self, restaurant, item_name):
        item = restaurant.menu.find_item(item_name)
        if item:
            restaurant.menu.remove_item(item)

    def update_item_price(self, restaurant, item_name, price):
        item = restaurant.menu.find_item(item_name)
        if item:
            item.price = price
    
    def view_menu(self, restaurant):
        restaurant.menu.show_menu()

    # Managing the customer
    def add_customer(self, restaurant, customer):
        existing_customer = restaurant.find_customer(customer.email)
        if existing_customer:
            return f"{customer.email} is already used."
        else:
            restaurant.add_customer(customer)
            return f"{customer.name} is added."

    def remove_customer(self, restaurant, email):
        customer = restaurant.find_customer(email)
        if customer:
            restaurant.remove_customer(customer)
            return "Customer is Deleted!"
        else:
            return "Customer is not found!"
    
    def view_customers(self, restaurant):
        restaurant.view_customer()

class Customer(User):
    def __init__(self, name, email, address):
        super().__init__(name, email)
        self.address = address
        self.wallet = 0
        self.past_orders = []
        self.cart = Order()
    
    def view_menu(self, restaurant):
        restaurant.menu.show_menu()

    def add_funds(self, amount):
        self.wallet += amount
    
    @property
    def check_balance(self):
        return self.wallet

    def add_to_cart(self, restaurant, item_name, quantity):
        item = restaurant.menu.find_item(item_name)
        self.cart.add_item(item, quantity)

    def remove_to_cart(self, restaurant, item_name):
        item = restaurant.menu.find_item(item_name)
        self.cart.remove_item(item)

    def view_cart(self):
        self.cart.view_order()
