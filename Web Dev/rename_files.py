import os
import re

def rename_files():
    directory = r"c:\Users\Arnav\projects\arnav\Web Programming"
    print(f"Scanning directory: {directory}")
    
    # Get all files
    all_files = os.listdir(directory)
    
    # We want to map a2..a81 to a1..a80.
    html_files = []
    for f in all_files:
        match = re.match(r'^a(\d+)\.html$', f)
        if match:
            html_files.append((int(match.group(1)), f))
            
    # Sort files ascending by number: 2, 3, 4 ... 81
    # This is safe because when a2.html becomes a1.html, it frees up a2 for a3
    html_files.sort()
    
    renamed_count = 0
    for num, filename in html_files:
        new_num = num - 1
        
        # The user requested the final sequence to be a1 to a80
        if 1 <= new_num <= 80:
            new_filename = f"a{new_num}.html"
            old_path = os.path.join(directory, filename)
            new_path = os.path.join(directory, new_filename)
            
            print(f"Renaming: {filename} -> {new_filename}")
            os.rename(old_path, new_path)
            renamed_count += 1
            
    print(f"\nSuccessfully renamed {renamed_count} files.")
    print("The 'a1_intro.html' file was left untouched as requested.")

if __name__ == "__main__":
    rename_files()
