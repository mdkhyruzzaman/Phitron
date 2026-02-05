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
        print("Item Name\tPrice\tQuantity")
        print('-'*40)
        for item in self.item_list:
            print(f"{item.name}{'\t' if len(item.name)<6 else ''}\t{item.price}\t{item.quantity}")