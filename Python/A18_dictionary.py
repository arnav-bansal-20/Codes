# dictionary
info = {"name": "Alice", "age": 30, "city": "New York"}
# print(info["name"])  # Output: Alice is item is not present in dict it will thown an error
print(info.get("name"))  # Output: Alice if item is not present in list it will print none
# accessing multiple values using value()
print(info.values())  # Output: dict_values(['Alice', 30, 'New York'])
# or
for key in info:
    print(info[key])  # Output: Alice 30 New York


#  dictionary methods
ep2 = {"name": "Bob", "age": 25, "city": "Los Angeles", "hobby": "painting", "is_student": True }
ep2 = {"name": "Charlie", "age": 28, "city": "Dubai", "hobby": "Badminton", "is_student": True }
# update method
ep2.update({"age": 29, "city": "Abu Dhabi"})
print("use of update")
print(ep2)  # Output: {'name': 'Charlie', 'age': 29, 'city': 'Abu Dhabi', 'hobby': 'Badminton', 'is_student': True}
# pop method
print("use of pop")
removed_value = ep2.pop("hobby")
print(removed_value)  # Output: Badminton
print(ep2)  # Output: {'name': 'Charlie', 'age': 29, 'city': 'Abu Dhabi', 'is_student': True}
# popitem method
print("use of popitem")
removed_item = ep2.popitem()
print(removed_item)  # Output: ('is_student', True)
print(ep2)  # Output: {'name': 'Charlie', 'age': 29, 'city': 'Abu Dhabi'}
# clear method
print("use of clear")
ep2.clear()
print(ep2)  # Output: {}
del ep2
# print(ep2)  # This will raise an error since ep2 has been deleted