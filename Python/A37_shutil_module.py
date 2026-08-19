import shutil
import os
# -------------------------------
# 1. Create a sample file
# -------------------------------
with open("sample.txt", "w") as f:
    f.write("Hello Arnav!")
print("sample.txt created")
# -------------------------------
# 2. Copy the file
# -------------------------------
shutil.copy("sample.txt", "copy_sample.txt")
print("File copied successfully")
# -------------------------------
# 3. Create a folder
# -------------------------------
os.mkdir("backup_folder")
print("Folder created")
# -------------------------------
# 4. Move copied file into folder
# -------------------------------
shutil.move("copy_sample.txt", "backup_folder/copy_sample.txt")
print("File moved successfully")
# -------------------------------
# 5. Copy entire folder
# -------------------------------
shutil.copytree("backup_folder", "duplicate_folder")
print("Folder copied successfully")
# -------------------------------
# 6. Create ZIP archive
# -------------------------------
shutil.make_archive("my_backup", "zip", "backup_folder")
print("ZIP archive created")
# -------------------------------
# 7. Display disk usage
# -------------------------------
total, used, free = shutil.disk_usage("/")
print("\nDisk Usage:")
print("Total:", total)
print("Used :", used)
print("Free :", free)
# -------------------------------
# 8. Delete copied folder
# -------------------------------
shutil.rmtree("duplicate_folder")
print("\nDuplicate folder deleted")