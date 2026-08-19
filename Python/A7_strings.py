name = "Arnav"
apple = "He said i want to eat an \"apple\" "
print(name)
print(apple)
# multiline string
a = '''this is a multiline string 
learning in python on 11 day of 100 days of code'''
print(a)
print(name[0])
print("Let's use a for loop:")
for i in name:
    print(i)

#   string formatting
    letter = "My name is {name} and i am learning {language}"
print(letter.format(name="Arnav", language="Python"))
# fstrings
name = "Arnav"
language = "Python"
letter = f"My name is {name} and i am learning {language}"
letter = f"My name is {{name}} and i am learning {{language}}"

print(letter)

# doc strings
def square(num):
    """This function returns the square of a number"""
    return num ** 2

square(5)
print(square.__doc__)