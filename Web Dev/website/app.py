import os
from flask import Flask, render_template, send_from_directory, abort

# Initialize Flask application with standard templates and static directories
app = Flask(
    __name__,
    template_folder='templates',
    static_folder='static'
)

BASE_DIR = os.path.abspath(os.path.dirname(__file__))

@app.route('/')
@app.route('/index.html')
def index():
    return render_template('index.html')

@app.route('/home')
@app.route('/home.html')
def home():
    return render_template('home.html')

@app.route('/about')
@app.route('/au')
@app.route('/au.html')
def about():
    return render_template('au.html')

@app.route('/admission')
@app.route('/adm')
@app.route('/adm.html')
def admission():
    return render_template('adm.html')

@app.route('/faculty')
@app.route('/fac')
@app.route('/fac.html')
def faculty():
    return render_template('fac.html')

@app.route('/infrastructure')
@app.route('/infra')
@app.route('/infra.html')
def infrastructure():
    return render_template('infra.html')

@app.route('/gallery')
@app.route('/gal')
@app.route('/gal.html')
def gallery():
    return render_template('gal.html')

@app.errorhandler(404)
def page_not_found(e):
    return """
    <html>
        <head>
            <title>404 Not Found</title>
            <link rel="stylesheet" href="/static/css/style.css">
        </head>
        <body style="font-family: Arial, sans-serif; text-align: center; padding: 50px; background-color: #f8f9fa;">
            <h1 style="color: #c9302c;">404 - Page Not Found</h1>
            <p>The requested page or asset could not be found.</p>
            <a href="/" style="color: navy; font-weight: bold; text-decoration: none;">&larr; Return to Home</a>
        </body>
    </html>
    """, 404

if __name__ == '__main__':
    port = int(os.environ.get("PORT", 5001))
    print("==========================================================")
    print(" S.B.P. D.A.V Centenary Public School - Flask Web Server")
    print(f" Running locally at: http://127.0.0.1:{port}")
    print("==========================================================")
    app.run(host='0.0.0.0', port=port, debug=True)
