from product import Product

class Order:
    def __init__(self):
        self.check_out_list : dict[Product, int] = {}
        self._sum : int = 0

    def add_product(self, product, quantity : int):
        if product in self.check_out_list:
            self.check_out_list[product] += quantity
            print("Increase Quantity.")
        else:
            self.check_out_list[product] = quantity
            print("Add to cart.")
        self._sum += (product.price * quantity)

    def remove_product(self, product):
        if product in self.check_out_list:
            self._sum -= (self.check_out_list[product] * product.price)
            del self.check_out_list[product]
            print("Remove from cart.")
        else:
            print('Not Found')

    def view_cart(self):
        return self.check_out_list

    @property
    def total_price(self):
        return self._sum