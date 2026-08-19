# Regular Expression in Python
'''import re
text = "My number is 98765"
result = re.search(r"\d+", text)
print(result.group())'''


'''
text = "Python is easy"
x = re.search("easy", text)
print(x)'''


'''
text = "1 2 3 4"
x = re.findall(r"\d", text)
print(x)'''


'''
text = "I like Java"
x = re.sub("Java", "Python", text)
print(x)'''


'''
text = "apple,banana;orange"
x = re.split("[,;]", text)
print(x)'''