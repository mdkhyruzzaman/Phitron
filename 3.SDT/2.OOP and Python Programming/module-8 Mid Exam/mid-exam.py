class Library:
    book_list = []

    @classmethod
    def entry_book(self, book):
        self.book_list.append(book)

class Book():
    def __init__(self, book_id, title, author):
        self.__book_id = book_id
        self.__title = title
        self.__author = author
        self.__availability = True

        Library.entry_book(self)

    def borrow_book(self):
        if self.__availability:
            self.__availability = False
            print(f"Success: You have borrowed '{self.__title}'.")
        else:
            print(f"Error: The book '{self.__title}' is already borrowed.")
        
        print()

    def return_book(self):
        if not self.__availability:
            self.__availability = True
            print(f"Success: You have returned '{self.__title}'.")
        else:
            print(f"Error: The book '{self.__title}' is not currently borrowed (it is available).")

        print()

    def view_book_info(self):
        print(f"Book ID: {self.__book_id}")
        print(f"Title: {self.__title}")
        print(f"Author: {self.__author}")
        print(f"Availability: {self.__availability}")
        print()

    def get_book_id(self):
        return self.__book_id

book1 = Book(1, 'Habluder Jonno Programming', 'Jhankar Mahbub')
book2 = Book(2, 'Chestar Gymnasium Futurer Calcium', 'Jhankar Mahbub')
book3 = Book(3, 'Peramoy Life er Peracitamol', 'Jhankar Mahbub')

library = Library()

while(True):
    print("--- Library Menu ---")
    print("1. View All Books")
    print("2. Borrow Book")
    print("3. Return Book")
    print("4. Exit")

    option = int(input('Choose Option: '))
    
    if option == 1:
        print("----- All Books -----")
        for book in library.book_list:
            book.view_book_info()

    elif option == 2:
        book_id = int(input("Enter the Book ID:"))
        is_found = False
        for book in Library.book_list:
            if book.get_book_id() == book_id:
                book.borrow_book()
                found = True
                break

        if not found:
            print("Error: Invalid Book ID.")

    elif option == 3:
        book_id = int(input("Enter the Book ID:"))
        is_found = False
        for book in Library.book_list:
            if book.get_book_id() == book_id:
                book.return_book()
                found = True
                break

        if not found:
            print("Error: Invalid Book ID.")

    elif (option == 4):
        print("Exit!")
        break