# user.py
from abc import ABC
from order import Order
import copy
from datetime import datetime

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
        return f"{item.name} added!"
    
    def remove_item(self, restaurant, item_name):
        item = restaurant.menu.find_item(item_name)
        if item:
            restaurant.menu.remove_item(item)
            return f"Item {item_name} is removed!"
        else:
            return f"Item {item_name} is not found."

    def update_item_price(self, restaurant, item_name, price):
        item = restaurant.menu.find_item(item_name)
        if item:
            item.price = price
            return f"{item_name} price updated."
        else:
            return f"{item_name} is not found."
    
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
            return "Customer is removed!"
        else:
            return "Customer is not found!"
    
    def view_customers(self, restaurant):
        restaurant.view_customer()

class Customer(User):
    def __init__(self, name, email, address):
        super().__init__(name, email)
        self.address = address
        self.wallet = 0
        self.past_orders = {} # {date, Order Object Copy}
        self.cart = Order()
    
    def view_menu(self, restaurant):
        restaurant.menu.show_menu()

    def add_funds(self, amount):
        self.wallet += amount
        return f"You are succefully add {amount}. Your new amount {self.check_balance}."
    
    @property
    def check_balance(self):
        return self.wallet

    def add_to_cart(self, restaurant, item_name, quantity):
        item = restaurant.menu.find_item(item_name)
        return self.cart.add_item(item, quantity)

    def remove_to_cart(self, restaurant, item_name):
        item = restaurant.menu.find_item(item_name)
        return self.cart.remove_item(item)

    def view_cart(self):
        self.cart.view_order()

    def place_order(self):
        if not self.cart.items:
            return "Cart is empty!"
        
        if self.cart.total_order_amount <= self.check_balance:
            self.wallet -= self.cart.total_order_amount
            self.past_orders[datetime.now()] = copy.deepcopy(self.cart)
            self.cart.clear()
            return 'Thank you for the order.'
        else:
            return 'Insufficient funds'
        
    def order_history(self):
        print(f"Order History of {self.name}")
        for order_date, order in self.past_orders.items():
            print(f"Order Date: {order_date}")
            order.view_order()
