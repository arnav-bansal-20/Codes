import os
import json

renames = [
    ('first.html', 'a81_js_prompt_flow_1.html'),
    ('welcome1.html', 'a82_js_localstorage.html'),
    ('Adm Form.html', 'a83_html_form_admission.html'),
    ('form.html', 'a84_html_form_basic.html'),
    ('signin.html', 'a85_html_form_signin_google.html'),
    ('student details.HTML', 'a86_html_table_student_details.html'),
    ('nb.html', 'a87_css_navigation_bar.html'),
    ('meter.html', 'a88_html5_meter_tag.html'),
    ('progress.html', 'a89_html5_progress_tag.html'),
    ('map.html', 'a90_api_google_maps_basic.html'),
    ('map-1.html', 'a91_api_google_maps_init.html'),
    ('map2.html', 'a92_api_google_maps_advanced.html'),
    ('Digital clock.html', 'a93_js_project_digital_clock.html'),
    ('dav.html', 'a94_project_school_homepage.html'),
    ('CRICKET.html', 'a95_project_cricket_main.html'),
    ('players.html', 'a96_project_cricket_players_list.html')
]

def rename_additional_files():
    directory = r"c:\Users\Arnav\projects\arnav\Web Dev"
    print(f"Scanning directory: {directory}")
    
    mapping_file = os.path.join(directory, "rename_mapping.json")
    
    # Load existing mapping
    if os.path.exists(mapping_file):
        with open(mapping_file, "r") as f:
            mapping = json.load(f)
    else:
        mapping = {}

    renamed_count = 0
    missing_files = []
    
    for old_name, new_name in renames:
        old_path = os.path.join(directory, old_name)
        new_path = os.path.join(directory, new_name)
        
        if os.path.exists(old_path):
            os.rename(old_path, new_path)
            mapping[new_name] = old_name
            print(f"Renamed: {old_name} -> {new_name}")
            renamed_count += 1
        else:
            missing_files.append(old_name)
            print(f"Missing: {old_name}")
            
    # Save the updated mapping to a JSON file
    with open(mapping_file, "w") as f:
        json.dump(mapping, f, indent=4)
        
    print(f"\nSuccessfully renamed {renamed_count} files.")
    if missing_files:
        print(f"Missing files: {missing_files}")
    print(f"Updated mapping saved to {mapping_file}")

if __name__ == "__main__":
    rename_additional_files()
