import os
import json

ordered_files = [
    # HTML
    ('a1.html', 'html_intro.html'),
    ('a2.html', 'html_formatting_lists.html'),
    ('a3.html', 'html_lists_nested.html'),
    ('a4.html', 'html_marquee.html'),
    ('a5.html', 'html_marquee_complex.html'),
    ('a6.html', 'html_links.html'),
    ('a7.html', 'html_images.html'),
    ('a8.html', 'html_image_map.html'),
    ('a9.html', 'html_headings.html'),
    ('a10.html', 'html_paragraphs_css.html'),
    ('a11.html', 'html_images_p_fifa.html'),
    ('a12.html', 'html_images_p_basketball.html'),
    ('a13.html', 'html_images_p_cricket.html'),
    ('a54.html', 'html5_audio.html'),
    ('a55.html', 'html5_video.html'),
    ('a64.html', 'html_meta_tags.html'),
    
    # CSS
    ('a44.html', 'css_headings.html'),
    ('a45.html', 'css_animations.html'),
    ('a65.html', 'css_internal_styles.html'),
    
    # JS Basics
    ('a56.html', 'js_alert.html'),
    ('a14.html', 'js_prompt_arithmetic.html'),
    ('a15.html', 'js_prompt_arithmetic_2.html'),
    ('a16.html', 'js_prompt_arithmetic_3.html'),
    ('a17.html', 'js_prompt_arithmetic_4.html'),
    ('a57.html', 'js_parseint.html'),
    ('a36.html', 'js_prompt_display.html'),
    
    # JS Conditionals
    ('a18.html', 'js_if_condition_range.html'),
    ('a19.html', 'js_if_condition_vowels.html'),
    ('a20.html', 'js_if_condition_divisible.html'),
    
    # JS Loops
    ('a21.html', 'js_for_loop_basic.html'),
    ('a22.html', 'js_for_loop_evens.html'),
    ('a23.html', 'js_for_loop_tens.html'),
    ('a24.html', 'js_for_loop_reverse.html'),
    ('a25.html', 'js_for_loop_squares.html'),
    ('a26.html', 'js_for_loop_cubes.html'),
    ('a27.html', 'js_for_loop_sum.html'),
    ('a28.html', 'js_for_loop_even_odd_sum.html'),
    ('a29.html', 'js_for_loop_range.html'),
    ('a30.html', 'js_for_loop_range_2.html'),
    ('a31.html', 'js_for_loop_multiplication_table.html'),
    ('a32.html', 'js_while_loop.html'),
    ('a33.html', 'js_do_while_loop.html'),
    ('a34.html', 'js_while_loop_user_input.html'),
    
    # JS Arrays
    ('a58.html', 'js_array_user_input_1.html'),
    ('a59.html', 'js_array_user_input_2.html'),
    ('a60.html', 'js_array_user_input_3.html'),
    ('a70.html', 'js_array_user_input_4.html'),
    ('a61.html', 'js_array_methods.html'),
    
    # JS Functions & DOM
    ('a37.html', 'js_function_bgcolor.html'),
    ('a38.html', 'js_function_form_sum.html'),
    ('a39.html', 'js_function_form_square.html'),
    ('a40.html', 'js_function_radio_button.html'),
    ('a41.html', 'js_function_checkboxes.html'),
    ('a42.html', 'js_function_swap_values.html'),
    ('a43.html', 'js_function_dropdown_color.html'),
    ('a46.html', 'js_function_button_color.html'),
    ('a47.html', 'js_function_array_colors.html'),
    ('a48.html', 'js_function_change_text.html'),
    ('a49.html', 'js_function_change_image.html'),
    ('a51.html', 'js_function_slideshow.html'),
    ('a63.html', 'js_function_form_length.html'),
    
    # JS Built-in Objects
    ('a35.html', 'js_math_sqrt.html'),
    ('a50.html', 'js_date_object.html'),
    ('a52.html', 'js_string_functions.html'),
    ('a53.html', 'js_window_open.html'),
    ('a62.html', 'js_navigator_object.html'),
    
    # HTML5 Advanced APIs
    ('a66.html', 'html5_canvas_1.html'),
    ('a67.html', 'html5_canvas_2.html'),
    ('a68.html', 'html5_canvas_3.html'),
    ('a69.html', 'html5_canvas_4.html'),
    ('a71.html', 'html5_canvas_5.html'),
    ('a72.html', 'html5_canvas_6.html'),
    ('a73.html', 'html5_canvas_7.html'),
    ('a74.html', 'html5_canvas_8.html'),
    ('a75.html', 'html5_canvas_9.html'),
    ('a76.html', 'html5_drag_and_drop.html'),
    
    # jQuery
    ('a77.html', 'jquery_click_hide.html'),
    ('a78.html', 'jquery_car_rental.html'),
    ('a79.html', 'jquery_hover.html'),
    ('a80.html', 'jquery_click_color.html'),
]

def rename_files():
    directory = r"c:\Users\Arnav\projects\arnav\Web Dev"
    print(f"Scanning directory: {directory}")
    
    mapping = {}
    renamed_count = 0
    missing_files = []
    
    for i, (old_name, base_new_name) in enumerate(ordered_files):
        new_name = f"a{i+1}_{base_new_name}"
        
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
            
    # Save the mapping to a JSON file
    mapping_file = os.path.join(directory, "rename_mapping.json")
    with open(mapping_file, "w") as f:
        json.dump(mapping, f, indent=4)
        
    print(f"\nSuccessfully renamed {renamed_count} files.")
    if missing_files:
        print(f"Missing files: {missing_files}")
    print(f"Mapping saved to {mapping_file}")

if __name__ == "__main__":
    rename_files()
