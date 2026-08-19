# lists
'''marks = [90, 80, 70, 60, 50]
print(marks)
print(type(marks))'''
# negative indexing
'''print(marks[-1])  # last element    
print(marks[-2])  # second last element'''
# slicing
'''print(marks[1:4])  # from index 1 to index 3
print(marks[:3])   # from start to index 2
print(marks[3:])   # from index 3 to end
'''
# list comperehension
'''squares = [x**2 for x in range(1, 11)]
print(squares)'''
#  list methods 
'''marks.append(40)  # add an element at the end
print(marks)
marks.insert(2, 75)  # add an element at index 2
print(marks)
marks.remove(60)  # remove the first occurrence of 60
print(marks)
marks.pop()  # remove the last element
print(marks)
marks.sort()  # sort the list in ascending order
print(marks)
marks.sort(reverse=True)  # sort the list in descending order
print(marks)
marks.clear()  # remove all elements from the list
print(marks)'''