class Product:
    def __init__(self, name, price : int, quantity : int, seller_id = None):
        self.id = None
        self.name = name
        self.price : int = price
        self.quantity : int = quantity
        self.seller_id = seller_id