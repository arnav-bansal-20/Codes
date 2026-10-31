# prog1: Check if a number is even or odd
'''a = int(input("Enter the number : "))
if a%2 == 0:
    print("The number is even")
else:
    print("The number is odd")'''


# prog2: Check if a number is positive, negative or zero
'''a = input("enter name : ")
print(a, "Good afternoon")
name = 'Arnav'
date = '12/06/2006'
letter = f"dear {name} you are selected ! {date}"'''


# prog3: Check if a number is divisible by 5 and 11
'''print(letter)
l = []
for i in range(1,8):
    a = input("enter : ")
    l.append(a)
print(l)'''


# prog4: Sort a list of 7 numbers
'''l = []
for i in range(1,8):
    a = input("enter : ")
    l.append(a)
l.sort()
print(l)'''


# prog5: Find the greatest of 4 numbers
'''Program to sum 4 numbers in a list
numbers = []
# Taking input from user
for i in range(4):
    num = int(input(f"Enter number {i+1}: "))
    numbers.append(num)
# Calculating sum
total = sum(numbers)
# Display result
print("The sum of the 4 numbers is:", total)'''


# prog6: Count number of zeros in a tuple
'''Program to count number of zeros in a tuple
t = (1, 0, 3, 0, 5, 0, 7)
count_zeros = t.count(0)
print("Number of zeros in the tuple:", count_zeros)
a = int(input("Enter number: "))
b = int(input("Enter number: "))
c = int(input("Enter number: "))
d = int(input("Enter number: "))
if (a > b and a > c and a > d):
    print("a is the greatest:", a)
elif (b > a and b > c and b > d):
    print("b is the greatest:", b)
elif (c > a and c > b and c > d):
    print("c is the greatest:", c)
else:
    print("d is the greatest:", d)'''


# prog7: Check if a comment is spam or not
'''text = input("Enter your comment: ")
if ("make a lot of money" in text or
    "buy now" in text or
    "subscribe this" in text or
    "click this" in text):
    print("This is a spam comment")
else:
    print("This is not spam")
text = input("Enter username: ")
if len(text) < 10:
    print("less")
else:
    print("no prob")'''


#   prog8: Check if a name is present in a list or not
'''names = ["Arnav", "Rahul", "Priya", "Amit"]
search = input("Enter the name to search: ")
if search in names:
    print("Name is present in the list")
else:
    print("Name is not present in the list")
post = input("Enter your post: ")
if "Harry" in post:
    print("This post is talking about Harry")
else:
    print("This post is not talking about Harry")'''


# prog9: Find the greatest of 3 numbers using function
'''a = int(input("Enter number: "))
b = int(input("Enter number: "))
c = int(input("Enter number: "))
def greatest(a,b,c):
    if (a > b and a > c):
        print("a is the greatest:", a)
    elif (b > a and b > c):
        print("b is the greatest:", b)
    else:
        print("c is the greatest:", c)
greatest(a,b,c)
def remove_and_strip(words, target):
    result = []
    for word in words:
        w = word.strip()   # remove extra spaces
        if w != target:    # skip the target word
            result.append(w)
    return result
# Example usage
lst = ["apple ", " banana", "mango", "apple", "  orange "]
output = remove_and_strip(lst, "apple")
print(output)'''


# prog10: Generate multiplication tables from 2 to 20 and save them in separate text files
'''import os
# Folder name
folder_name = "Tables"
# Create folder if not exists
if not os.path.exists(folder_name):
    os.mkdir(folder_name)
# Generate tables from 2 to 20
for num in range(2, 21):
    file_path = os.path.join(folder_name, f"table_{num}.txt")
    with open(file_path, "w") as f:
        for i in range(1, 11):
            f.write(f"{num} x {i} = {num*i}\n")
print("All tables generated successfully!")'''


# prog11: Read a text file, replace a word and save the updated content in a new file
'''# Read file
with open("file.txt", "r") as f:
    text = f.read()
# Replace word
text = text.replace("donkey", "######")
# Write updated content to new file
with open("new_text_file.txt", "w") as f:
    f.write(text)
# Print result
print(text)'''


# prog12: Create a class calculator which takes a number as input and has methods to calculate square, cube and square root of the number.
'''import math
class calculator:
    b = int(input("enter number : "))
    square = b*b
    cube = b*b*b
    sqrrrot = math.sqrt(b)
obj = calculator()
print("square of number :", obj.square)
print("cube of number :",obj.cube)
print("squareRoot of number :",obj.sqrrrot)'''


# prog13: Create a class Train which has methods to book a ticket, get status of the train and get fare information.
'''class Train:
    def __init__(slf, name, fare, seats):
        slf.name = name
        slf.fare = fare
        slf.seats = seats
    def getStatus(slf):
        print(f"Train name: {slf.name}")
        print(f"Available seats: {slf.seats}")
    def getFare(slf):
        print(f"Fare of the train is: ₹{slf.fare}")
    def bookTicket(slf):
        if slf.seats > 0:
            print("Your ticket has been booked!")
            slf.seats -= 1
        else:
            print("Sorry, this train is full!")
# Example usage
t = Train("Rajdhani Express", 1500, 2)
t.getStatus()
t.bookTicket()
t.bookTicket()
t.bookTicket()
t.getStatus()
t.getFare()'''


# prog14: Create a class hierarchy of animals, pets and dogs. Use inheritance to show the relationship between these classes.
'''class animal:
    def __init__(self):
        print("this is class animals")
class pets(animal):
    def __init__(self):
        super().__init__()   # calling parent constructor
        print("this is class pets")
class dogs(pets):
    def __init__(self):
        super().__init__()   # calling parent constructor
        print("this is class dogs")
obj = dogs()'''


# prog15: Create a string that contains the name of a student, his marks and phone number. Use string formatting to display this information in a readable format.
'''number = int(input("enter number : "))
marks = int(input("Enter marks : "))
name = input("Enter name : ")
str = f"\"The name of the student is {name}, his marks are {marks} and phone number is {number}\""
print(str)'''


# prog16: Create a list of 10 numbers and use list comprehension to create a new list that contains only the even numbers from the original list.
'''table = [7,14,21,28,35,42,49,56,63,70]
vertical_string = "\n".join(str(num) for num in table)
print(vertical_string)'''


# prog17: Create a list of 20 numbers and use a for loop to create a new list that contains only the numbers that are divisible by 5.
'''lst = [1,2,3,4,5,6,7,8,9,11,12,13,14,15,55,56,45,35,25,85,95,75,65,105]
new_lst = []
for num in lst:
    if num%5 == 0:
        new_lst.append(num)
print(new_lst)'''


# prog18: Create a list of 10 numbers and use the reduce function to find the maximum number in the list.
'''from functools import reduce
numbers = [3, 5, 2, 8, 1]
max_number = reduce(lambda x, y: x if x > y else y, numbers)
print("The maximum number in the list is:", max_number)'''


# prog19: Create a list of 10 numbers and use the filter function to create a new list that contains only the prime numbers from the original list.
'''files = ["file.txt", "file1.txt", "file2.txt"]
for file in files:
    try:
        f = open(file, "r")
        print(file, "exists")
        f.close()
    except FileNotFoundError:
        print(file, "does not exist")'''


# prog20: Write a program to print third, fifth and seventh element from a list using enumerate function.
'''lst = [1, 2, 3, 4, 5, 6, 7]
for i, val in enumerate(lst):
    if i == 2 or i == 4 or i == 6:
        print(f"Element at index {i}: {val}")'''


# prog21: Write a list comprehension to print a list which contains the multiplication table of a user entered number. 
'''num = int(input("Enter a number: "))
table = []
for i in range(1, 11):
    table.append(num * i)
print(table)'''


# prog22: Write a program to display a/b where a and b are integers. If b=0, display infinite by handling the ‘ZeroDivisionError’.
'''a = int(input("Enter a: "))
b = int(input("Enter b: "))
try:
    result = a / b
    print(f"The result of {a} divided by {b} is: {result}")
except ZeroDivisionError:
    print("Infinite (division by zero is not allowed)")'''


# prog23: Write __str__() method to print the vector as follows:  7i + 8j +10k   
'''class Vector:
    def __init__(self, i, j, k):
        self.i = i
        self.j = j
        self.k = k
    def __str__(self):
        return f"{self.i}i + {self.j}j + {self.k}k"
v = Vector(7, 8, 10)
print(v)'''


# prog24: convert emoji into text
'''import emoji
text = "I love Python programming! 😍🐍"
print(emoji.demojize(text))'''


# prog25: Record audio from microphone and save it as a wav file
'''import sounddevice as sd
from scipy.io.wavfile import write
import wavio as wv
freq = 44100
duration = 5
recording = sd.rec(int(duration * freq), samplerate=freq, channels=2)
sd.wait()
write("recording0.wav", freq, recording)
wv.write("recording1.wav", recording, freq, sampwidth=2)'''

# prog26: Exception handling with class hierarchy
'''class B(Exception):
    pass

class C(B):
    pass

class D(C):
    pass

for cls in [B, C, D]:
    try:
        raise cls()
    except D:
        print("D")
    except C:
        print("C")
    except B:
        print("B")'''