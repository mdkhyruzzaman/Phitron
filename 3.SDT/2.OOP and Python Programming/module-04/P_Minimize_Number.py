n = int(input())

nums = list(map(lambda i:int(i), input().split()))

cnt = 0

while True:
    is_op = True
    for key, val in enumerate(nums):
        if val > 0 and val % 2 == 0:
            nums[key] = val/2
        else:
            is_op = False
            break
    if is_op:
        cnt += 1
    else:
        break


print(cnt)