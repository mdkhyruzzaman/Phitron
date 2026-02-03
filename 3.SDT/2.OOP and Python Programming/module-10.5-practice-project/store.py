from product import Product

class Store:
    def __init__(self):
        self._products : dict[int, Product] = {} # {product_id, product_object}
        self._last_product_id : int = 0

    def find_product(self, product_id):
        if product_id in self._products:
            return self._products[product_id]
        return None

    def add_product(self, product : Product):
        if self.find_product(product.id):
            self._products[product.id].quantity += product.quantity
            print("Product Quantity Increase.")
        else:
            self._last_product_id += 1
            product.id = self._last_product_id
            self._products[product.id] = product
            print("Product Added!")

    def remove_product(self, product_id):
        if self.find_product(product_id):
            del self._products[product_id]
            print('Product Deleted!')
        else:
            print('Not Found!')

    def decrease_quantity(self, product_id, quantity):
        product = self.find_product(product_id)
        if product:
            product.quantity -= quantity
        else:
            print("Not Found!")

    def view_products(self):
        return list(self._products.values())