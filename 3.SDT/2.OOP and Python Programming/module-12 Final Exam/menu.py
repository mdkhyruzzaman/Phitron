# menu.py
class Menu:
    def __init__(self):
        self.item_list = []

    def find_item(self, item_name):
        for item in self.item_list:
            if item.name.lower() == item_name.lower():
                return item
        return None
    
    def add_item(self, item):
        self.item_list.append(item)

    def remove_item(self, item):
        self.item_list.remove(item)

    def show_menu(self):
        print('-'*80)
        print(f"| {'Menu Items':^76} |")
        print('-'*80)
        print(f"| {'Item Name':<30} | {'Price':>20} | {'Quantity':>20} |")
        print('-'*80)
        for item in self.item_list:
            print(f"| {item.name:<30} | {item.price:>20} | {item.quantity:>20} |")
            print('-'*80)