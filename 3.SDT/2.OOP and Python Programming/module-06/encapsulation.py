class Bank:
    def __init__(self, holder_name, initial_deposit):
        self.holder_name = holder_name #public
        self._branch = 'banai 11' #protected - (it just a convention)
        self.__balance = initial_deposit #private

    def deposit(self, amount):
        self.__balance += amount

    def get_balance(self):
        return self.__balance

rafsun = Bank('Chooto bro', 10000)

print(rafsun.holder_name)
rafsun.deposit(40000)
print(rafsun.get_balance())