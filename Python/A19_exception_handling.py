# exception handling
'''a = int(input("Enter a number: "))
try:
    result = 10 / a
    print("Result:", result)
except ZeroDivisionError:
    print("Error: Division by zero is not allowed.")

    # finally block
try:
    l = [1, 2, 3, 4]
    a = int(input("Enter an index: "))
    print("Element at index", a, "is", l[a])
except IndexError:
    print("Error: Index out of range.")
finally:
    print("This will always be executed.")'''

    # custom exceptions
a = int(input("Enter a positive number: "))
if a <= 0:
        raise ValueError("Please enter a positive number.")

# or