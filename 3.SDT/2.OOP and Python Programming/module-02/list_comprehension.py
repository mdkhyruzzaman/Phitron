numbers = [45, 56, 12, 89, 87, 35, 32, 84, 59, 46, 93]
odds = []
for num in numbers:
    if num % 2 == 1 and num % 5 == 0:
        odds.append(num)

print(odds)

odd_nums = [num for num in numbers if num % 2 == 1 and num % 5 == 0]
print(odd_nums)