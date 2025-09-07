def full_name(first, last):
    return f"Full name is {first} {last}."

# name = full_name("Alu", "Kodu")
name = full_name(last="Kodu", first="Alu")
print(name)

def famous_name(first, last, **additions):
    return f"{first}, {last}, {additions}"

name = famous_name(first="taheri", last="ali", second="aluvaji")
print(name)