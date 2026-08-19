import os
import json

def undo_renames():
    directory = r"c:\Users\Arnav\projects\arnav\Web Dev"
    mapping_file = os.path.join(directory, "rename_mapping.json")
    
    if not os.path.exists(mapping_file):
        print(f"Error: Could not find {mapping_file}")
        return
        
    with open(mapping_file, "r") as f:
        mapping = json.load(f)
        
    restored_count = 0
    missing_files = []
    
    for new_name, old_name in mapping.items():
        old_path = os.path.join(directory, new_name)
        new_path = os.path.join(directory, old_name)
        
        if os.path.exists(old_path):
            os.rename(old_path, new_path)
            print(f"Restored: {new_name} -> {old_name}")
            restored_count += 1
        else:
            missing_files.append(new_name)
            print(f"Missing: {new_name}")
            
    print(f"\nSuccessfully restored {restored_count} files.")
    if missing_files:
        print(f"Missing files: {missing_files}")

if __name__ == "__main__":
    undo_renames()
