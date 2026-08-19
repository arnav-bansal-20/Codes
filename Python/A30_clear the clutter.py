import os

def rename_files(folder_path, extensions):
    files = os.listdir(folder_path)
    count = 1

    for file in files:
        if file.endswith(extensions):
            old_path = os.path.join(folder_path, file)
            ext = os.path.splitext(file)[1]
            new_name = f"{count}{ext}"
            new_path = os.path.join(folder_path, new_name)

            os.rename(old_path, new_path)
            count += 1

    print("Files renamed successfully!")


# Call function
path = input("Enter folder path: ")
rename_files(path, (".png", ".jpg", ".jpeg"))