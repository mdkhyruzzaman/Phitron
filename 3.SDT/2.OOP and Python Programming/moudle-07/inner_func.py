# function is a first class object
def double_decker():
    print('starting the double decker')
    def inner_fun():
        print('inside the inner')
        return 300
    return inner_fun

# print(double_decker())
print(double_decker()())