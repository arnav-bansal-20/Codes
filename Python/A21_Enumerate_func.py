'''marks = [85, 92, 78, 96, 88, 90]
index = 0
for mark in marks:
    if(index == 3):
        print("The mark at index 3 is:", mark)
    index += 1'''
    
    
# Using enumerate function
marks = [85, 92, 78, 96, 88, 90]
for index, mark in enumerate(marks):
    if(index == 3):
        print("The mark at index 3 is:", mark)