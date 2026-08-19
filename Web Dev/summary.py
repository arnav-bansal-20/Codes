import os, glob, re
from bs4 import BeautifulSoup

def summarize_file(filepath):
    with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()
    
    tags = list(set(re.findall(r'<([a-z0-9]+)\b', content.lower())))
    
    has_js = '<script' in content.lower()
    has_css = '<style' in content.lower() or 'style=' in content.lower()
    
    soup = BeautifulSoup(content, 'html.parser')
    text = soup.get_text(separator=' ', strip=True)
    words = re.findall(r'[a-zA-Z0-9]+', text)[:10]
    short_text = ' '.join(words)
    
    tags_str = ','.join(tags[:5])
    return f"Tags: {tags_str} | JS: {has_js} | CSS: {has_css} | Text: {short_text}"

dir_path = r'c:\Users\Arnav\projects\arnav\Web Dev'
files = glob.glob(os.path.join(dir_path, 'a*.html'))

for f in sorted(files, key=lambda x: os.path.basename(x)):
    if re.match(r'^a\d+\.html$', os.path.basename(f)):
        print(f"{os.path.basename(f)}: {summarize_file(f)}")
