class Order:
    def __init__(self):
        self.items = {}

    def add_item(self, item, quantity):
        if item in self.items:
            self.items[item] += quantity  # Increase the Item Quantity
        else:
            self.items[item] = quantity  # Add New Item at Cart

    def remove(self, item):
        if item in self.items:
            del self.items[item]

    @property
    def total_price(self):
        return sum(item.price * quantity for item, quantity in self.items.items())

    def clear(self):
        self.items = {}