class Order:
    def __init__(self):
        self.items = {} # {food_item, quantity}

    def add_item(self, item, quantity):
        if item in self.items:
            self.items[item] += quantity
        else:
            self.items[item] = quantity

    def remove_item(self, item):
        if item in self.items:
            del self.items[item]

    def view_order(self):
        print('Order Items')
        print("Item Name\tPrice\tQuantity")
        print('-'*40)
        for item, quantity in self.items.items():
            print(f"{item.name}{'\t' if len(item.name)<6 else ''}\t{item.price}\t{quantity}")