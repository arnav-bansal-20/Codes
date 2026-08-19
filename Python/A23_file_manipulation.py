# file manipulation 
f = open("new_text_file.txt", "w")
f.write("nkcnkdsncjdbcjsbcsdbcuw")
f = open("new_text_file.txt", "r")
text = f.read()
print(text)
f.close()
