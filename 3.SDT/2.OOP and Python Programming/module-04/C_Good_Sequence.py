n = int(input())

num_list = list(map(lambda x:int(x), input().split()))

num_dict = {}

for num in num_list:
    if num in num_dict:
        num_dict[num] += 1
    else:
        num_dict[num] = 1

min_remove = 0

for key, val in num_dict.items():
    if key > val:
        min_remove += val
    elif key < val:
        min_remove += (val - key)

print(min_remove)