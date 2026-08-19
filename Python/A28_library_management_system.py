class Library:
    def __init__(self):
        self.books = []
        self.no_of_books = 0

    def add_book(self, book_name):
        self.books.append(book_name)
        self.no_of_books += 1
        print("Book added successfully!")

    def show_books(self):
        if self.no_of_books == 0:
            print("No books in library")
        else:
            print("\nBooks in library:")
            for book in self.books:
                print("-", book)

    def get_no_of_books(self):
        print("Total number of books:", self.no_of_books)


# Create object
lib = Library()

# Menu-driven loop
while True:
    print("\n--- Library Menu ---")
    print("1. Add Book")
    print("2. Show Books")
    print("3. Show Number of Books")
    print("4. Exit")

    choice = input("Enter your choice: ")

    if choice == '1':
        book = input("Enter book name: ")
        lib.add_book(book)

    elif choice == '2':
        lib.show_books()

    elif choice == '3':
        lib.get_no_of_books()

    elif choice == '4':
        print("Exiting program...")
        break

    else:
        print("Invalid choice, try again!")