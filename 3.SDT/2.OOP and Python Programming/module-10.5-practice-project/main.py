from system import System
from user import Seller, Customer

system = System()
s1 = Seller('s1', 's1', '123')
system.auth.register_seller(s1)
s1.add_product(system.store, 'Banana', 10, 120)
c1 = Customer('c1', 'c1', '123')
system.auth.register_customer(c1)

def main_menu():
    while True:
        print('Main Menu')
        print('========================')
        print('1. Sign up as a seller.')
        print('2. Sign up as customer.')
        print('3. Go to Login Menu')
        print('0. To Exit')
        choice = int(input('Choice a option: '))
        if choice == 0:
            break
        elif choice == 1:
            name = input("Enter seller name: ")
            email = input("Enter seller email: ")
            password = input("Enter seller password: ")

            seller = Seller(name, email, password)
            system.auth.register_seller(seller)
        elif choice == 2:
            name = input('Enter your name: ')
            email = input('Enter your email: ')
            password = input('Enter your password: ')

            customer = Customer(name, email, password)
            system.auth.register_customer(customer)
        elif choice == 3:
            login_menu()
        else:
            print("Invalid input! Try again.")
            continue

def login_menu():
    while True:
        print('Login Menu')
        print('========================')
        print('1. Login as a customer.')
        print('2. Login as a seller.')
        print("3. Back to main menu.")

        choice = int(input("Choice a option: "))
        if choice == 1:
            email = input("Enter your email: ")
            password = input('Enter your password: ')
            customer = system.auth.login_customer(email, password)
            if customer:
                customer_menu(customer)
            else:
                print('Customer email or password is invalid!')
        elif choice == 2:
            email = input('Enter your email: ')
            password = input('Enter your password: ')
            seller = system.auth.login_seller(email, password)
            if seller:
                seller_menu(seller)
            else:
                print('Seller email or password is invalid!')
        elif choice == 3:
            break
        else:
            print("Invalid input! Try again.")
            continue

def seller_menu(seller : Seller):
    print(f"Seller Info:\nName: {seller.name}\nSeller ID: {seller.id}")
    while True:
        print("Seller Menu")
        print('========================')
        print('1. View products')
        print('2. Add product')
        print('3. Back to main menu')

        choice = int(input('Choice a option: '))
        if choice == 1:
            seller.view_products(system.store)
        elif choice == 2:
            name = input('Enter product name: ')
            price = int(input('Enter product price: '))
            quantity = int(input('Enter product quantity: '))
            seller.add_product(system.store, name, price, quantity)
        elif choice == 3:
            break
        else:
            print('Invalid input! Try again.')
            seller_menu(seller)

def customer_menu(customer : Customer):
    customer.view_products(system.store)

    while True:
        print("Customer Menu")
        print('========================')
        print('1. Add to cart.')
        print('2. View cart.')
        print('3. Back to main menu.')

        choice = int(input('Choice a option: '))
        if choice == 1:
            product_id = int(input('Enter the product ID: '))
            quantity = int(input('Enter the quantity: '))
            customer.add_to_cart(system.store, product_id, quantity)
        elif choice == 2:
            customer.view_cart()
            print('========================')
            print("1. Check Out.")
            print('2. Buy More.')
            print('3. Back to main menu.')

            option = int(input('Choice a option: '))
            if option == 1:
                customer.check_out(system.store)
                main_menu()
            elif option == 2:
                customer_menu(customer)
            else:
                break
        elif choice == 3:
            main_menu()
        else:
            print('Invalid input!, Try again.')
            customer_menu(customer)

# Start The System
main_menu()