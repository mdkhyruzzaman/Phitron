# restaurant.py
from menu import Menu

class Restaurant:
    def __init__(self):
        self.admin_list = []
        self.customer_list = []
        self.menu = Menu()

    # Managing Customer
    def find_customer(self, email):
        for customer in self.customer_list:
            if customer.email == email:
                return customer
        return None

    def add_customer(self, customer):
        self.customer_list.append(customer)

    def remove_customer(self, customer):
        self.customer_list.remove(customer)

    def view_customer(self):
        print('Customer List')
        print(f"{'Customer Name':>20}{'Customer Email':>20}{'Customer Address':>30}")
        print('-' * 80)
        for customer in self.customer_list:
            print(f"{customer.name:>20}{customer.email:>20}{customer.address:>30}")
    
    #Managing Admin
    def find_admin(self, email):
        for admin in self.admin_list:
            if admin.email == email:
                return admin
        return None
    
    def add_admin(self, admin):
        self.admin_list.append(admin)

    def remove_admin(self, admin):
        self.admin_list.remove(admin)

    def view_admin(self):
        print('Admin List')
        print(f"{'Admin Name':>20}{'Admin Email':>20}")
        print('-' * 80)
        for admin in self.admin_list:
            print(f"{admin.name:>20}{admin.email:>20}")

    #Auth
    def login(self, email, role):
        if role.lower() == 'admin':
            admin = self.find_admin(email)
            if admin:
                return admin
            return None
        elif role.lower() == 'customer':
            customer = self.find_customer(email)
            if customer:
                return customer
            return None
        else:
            return None