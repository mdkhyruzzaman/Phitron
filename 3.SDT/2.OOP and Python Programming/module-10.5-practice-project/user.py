from abc import ABC
from store import Store
from order import Order
from product import Product

class User(ABC):
    def __init__(self, name, email, password):
        self.name = name
        self.email = email
        self.password = password

class Seller(User):
    def __init__(self, name, email, password):
        super().__init__(name, email, password)
        self.id = None

    def add_product(self, store : Store, name, price, quantity):
        product = Product(name, price, quantity, self.id)
        store.add_product(product)

    def remove_product(self, store : Store, product):
        if self.id == product.seller_id:
            store.remove_product(product.id)
        else:
            print("You can't delete this product.")

    def view_products(self, store : Store):
        products = store.view_products()
        print("Product List")
        print("======================")
        print(f"Product ID\tProduct Name\tPrice\tQuantity")
        for product in products:
            if product.seller_id == self.id:
                print(f"{product.id}\t\t{product.name}\t{product.price}\t{product.quantity}")

class Customer(User):
    def __init__(self, name, email, password):
        super().__init__(name, email, password)
        self.cart = Order()

    @staticmethod
    def view_products(store : Store):
        products = store.view_products()
        print("Product List")
        print("======================")
        print(f"Product ID\tProduct Name\tPrice\tQuantity")
        for product in products:
            print(f"{product.id}\t\t{product.name}\t{product.price}\t{product.quantity}")

    def add_to_cart(self, store : Store, product_id : int, quantity):
        product = store.find_product(product_id)
        if product:
            self.cart.add_product(product, quantity)

    def remove_from_cart(self, product):
        self.cart.remove_product(product)

    def view_cart(self):
        products = self.cart.view_cart()
        print("Check Out List")
        print("=========================")
        print(f"Product ID\tProduct Name\tPrice\tQuantity")
        for product, quantity in products.items():
            print(f"{product.id}\t\t{product.name}\t{product.price}\t{quantity}")

    def check_out(self, store : Store):
        for product, quantity in self.cart.view_cart().items():
            store.decrease_quantity(product.id, quantity)

        print(f"Your total buying amount: {self.cart.total_price}")

