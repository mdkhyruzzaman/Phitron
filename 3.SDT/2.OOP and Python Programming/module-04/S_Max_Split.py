str_input = input()

cnt = 0
str_list = []

cntL = 0
cntR = 0

inxStart = 0
inxCurr = 0

for ch in str_input:
    if ch == 'L':
        cntL += 1
        inxCurr += 1
    else:
        cntR += 1
        inxCurr += 1

    if cntL == cntR:
        cnt+=1
        str_list.append(str_input[inxStart:inxCurr])
        inxStart = inxCurr

print(cnt)
for i in str_list:
    print(i)