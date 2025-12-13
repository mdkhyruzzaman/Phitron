class Bank:
    def __init__(self, balance):
        self.balance = balance
        self.min_balance = 100
        self.max_balance = 100000

    def get_balance(self):
        return self.balance
    
    def deposit(self, amount):
        self.balance += amount

    def withdrawal(self, amount):
        if amount < self.min_balance:
            print(f'You can not withdrawal less then {self.min_balance}.')
        elif amount > self.max_balance:
            print(f'You can not withdrawal more then {self.max_balance}.')
        elif amount > self.balance:
            print(f"You don't have enough balance. You have just {self.get_balance()}.")
        else:
            self.balance -= amount
            print(f'Your withdrawal amout is {amount}.')
            print(f'Your remaining balance is {self.get_balance()}')

brac = Bank(1000)
print("Balance Have: ", brac.get_balance());
brac.deposit(5000)
brac.withdrawal(50)
brac.withdrawal(500000)
brac.withdrawal(50000)
brac.withdrawal(5000)