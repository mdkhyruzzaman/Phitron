balance = 100

def item_with_price(item, price):
    # We can access global variable directly but we can't modify, for modify use global keyword
    # rem = balance - price
    # print(f"{item}: {price}: {rem}")
    
    global balance
    balance = 10
    print(f"{item}: {price}: {balance}")

print(balance)
item_with_price("Apple", 60)
print(balance)