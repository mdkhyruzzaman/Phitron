# order.py
class Order:
    def __init__(self):
        self.items = {} # {food_item, quantity}

    def add_item(self, item, quantity):
        if item in self.items:
            self.items[item] += quantity
            item.quantity -= quantity
            return f"{item.name} quantity increase."
        else:
            self.items[item] = quantity
            item.quantity -= quantity
            return f"{item.name} added to cart"

    def remove_item(self, item):
        if item in self.items:
            item.quantity += self.items[item]
            del self.items[item]
            return f"{item.name} removed from cart."
        else:
            return f"{item.name} is not found at cart."
    
    @property
    def total_order_amount(self):
        amount = 0
        for item, quantity in self.items.items():
            amount += (item.price * quantity)
        return amount
    
    def view_order(self):
        width = 103
        total_amount = 0
        print('-'*width)
        print(f"| {'Order Items':^{width-4}} |")
        print('-'*width)
        print(f"| {'Item Name':<30} | {'Price':<20} | {'Quantity':<20} | {'Amount':<20} |")
        print('-'*width)
        for item, quantity in self.items.items():
            amount = item.price*quantity
            total_amount += amount
            print(f"| {item.name:<30} | {item.price:>20} | {quantity:>20} | {amount:>20} |")
            print('-'*width)
        print(f"| {'Total Amount: ':<{width-27}} | {total_amount:>20} |")
        print('-'*width)
    
    def clear(self):
        self.items.clear()