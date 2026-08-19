import os, glob, re
from bs4 import BeautifulSoup

def summarize_script(filepath):
    with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()
    
    soup = BeautifulSoup(content, 'html.parser')
    scripts = soup.find_all('script')
    if scripts:
        code = scripts[0].string or ''
        # Get first 3 meaningful lines of code
        lines = [line.strip() for line in code.split('\n') if line.strip() and not line.strip().startswith('<!--')]
        return ' | '.join(lines[:3])
    return 'No script'

dir_path = r'c:\Users\Arnav\projects\arnav\Web Dev'
files = glob.glob(os.path.join(dir_path, 'a*.html'))
valid_files = [f for f in files if re.match(r'^a\d+\.html$', os.path.basename(f))]

for f in sorted(valid_files, key=lambda x: int(re.search(r'\d+', os.path.basename(x)).group())):
    print(f"{os.path.basename(f)}: {summarize_script(f)}")
