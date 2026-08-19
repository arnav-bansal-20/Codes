import os
# os.mkdir("my_folder")

# if os.path.exists("my_folder"):
#     print("Folder created successfully.")
#     # general syntax : os.rename(src, dst)
#     os.rename("my_folder", "renamed_folder")
#     print("Folder renamed successfully.")

folders = os.listdir("C++")
# print(folders)
for folder in folders:
    print(folder)