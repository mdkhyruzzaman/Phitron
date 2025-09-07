# def sum(num1, num2):
#     result = num1 + num2
#     return result

def sum(num1, num2, num3 = 0):
    result = num1 + num2 + num3
    return result

# total = sum(99, 11)
# total = sum(99, 11, 10)
# print(total)

def all_sum(num1, *numbers):
    print(numbers)
    sum = 0
    for num in numbers:
        sum+=num
    return sum+num1

total = all_sum(10, 20, 50)
print(total)