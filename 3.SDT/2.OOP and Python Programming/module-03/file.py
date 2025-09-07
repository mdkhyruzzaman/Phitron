with open('file_test.txt', 'w') as file:
    file.write("I love python!. ")

with open('file_test.txt', 'r') as file:
    text = file.read()
    print(text)

with open('file_test.txt', 'a') as file:
    file.write(" This is a appended text.")

with open('file_test.txt', 'r') as file:
    text = file.read()
    print(text)