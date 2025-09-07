class Shop:
    cart = []
    def __init__(self, buyer):
        self.buyer = buyer

    def add_to_cart(self, item):
        self.cart.append(item)

mehzbeen = Shop('meh jabeeen')
mehzbeen.add_to_cart('shoes')
mehzbeen.add_to_cart('phone')

print(mehzbeen.cart)


nisho = Shop('Noisho')
nisho.add_to_cart('cap')
nisho.add_to_cart('watch')
print(nisho.cart)