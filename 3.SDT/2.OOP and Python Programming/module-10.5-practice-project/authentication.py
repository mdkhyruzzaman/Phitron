from user import Seller, Customer

class Authentication:
    def __init__(self):
        # Seller
        self._sellers: dict[str, Seller] = {}  # {email, seller_object}
        self._seller_id: int = 0

        # Customer
        self._customers: dict[str, Customer] = {}  # {email, customer_object}

    def register_seller(self, seller: Seller):
        if seller.email in self._sellers:
            print('Already exist,')
        else:
            self._seller_id += 1
            seller.id = self._seller_id
            self._sellers[seller.email] = seller
            print('Seller is registered.')

    def login_seller(self, email, password):
        if email in self._sellers:
            if self._sellers[email].password == password:
                return self._sellers[email]
        return None

    def register_customer(self, customer: Customer):
        if customer.email in self._customers:
            print('Already exist')
        else:
            self._customers[customer.email] = customer
            print('Customer is registered.')


    def login_customer(self, email, password):
        if email in self._customers:
            if self._customers[email].password == password:
                return self._customers[email]
        return None