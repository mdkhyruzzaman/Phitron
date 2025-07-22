year = 1900

if year % 4 == 0:
    if year % 100 == 0 and year % 400 != 0:
        print('Not Leaf Year')
    else:
        print("Leaf Year")
else:
    print("Not Leaf Year")