s = {1, 2, 4, 4, 2, 3, 5}
print(s)

# empty set
harry = set()
print(type(harry))
# sets methods
s1 = {1, 2, 5, 6 }
s2 = {3, 4, 7, 8}
print("union : ")
print(s1.union(s2))
s1.update(s2)
print("use of update : ")
print(s1)
s1.add(9)
print("use of add : ")
print(s1)
s1.remove(9)
print("use of remove : ")
print(s1)
s1.discard(8)
print("use of discard : ")
print(s1)
s1.issubset(s2)
print("use of issubset : ")
print(s1.issubset(s2))  
s1.issuperset(s2)
print("use of issuperset : ")
print(s1.issuperset(s2))
s1.clear()
print("use of clear : ")
print(s1)
del s1
print("use of del : ")
# print(s1) # this will give error because s1 is deleted
