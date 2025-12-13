def timer(func):
    def inner(*args, **kwargs):
        print('time started')
        # print(func)
        func(*args, **kwargs)
        print('time ended')
    return inner

# timer()()

@timer
def get_factorial(n,m=10):
    print('factorial starting', n, m)


get_factorial(5, m=50)