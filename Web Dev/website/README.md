# S.B.P. D.A.V Centenary Public School - Website (Flask)

A well-structured Python Flask web application serving the S.B.P. D.A.V Centenary Public School website.

---

## 📁 Directory Structure

```
website/
├── app.py                      # Flask application entry point & routes
├── requirements.txt            # Python dependencies (Flask)
├── README.md                   # Project documentation & instructions
├── static/                     # Static files (CSS, Images, JS)
│   ├── css/
│   │   └── style.css           # Global stylesheet & common UI styles
│   └── images/                 # All school photos, logos, and banners
│       ├── First aid.jpeg
│       ├── Library.jpg
│       ├── a.jpeg
│       ├── logo.jpeg
│       └── ... (30 image assets)
└── templates/                  # Jinja2 / HTML templates
    ├── index.html              # School Landing page
    ├── home.html               # Main Home page
    ├── au.html                 # About Us page
    ├── adm.html                # Admission page
    ├── fac.html                # Faculty page
    ├── infra.html              # Infrastructure page
    └── gal.html                # Gallery page
```

---

## 🚀 Getting Started

### 1. Install Dependencies
```bash
pip install -r requirements.txt
```

### 2. Run the Web Server
```bash
python3 app.py
```

### 3. Open in Browser
Visit **[http://127.0.0.1:5001](http://127.0.0.1:5001)**

---

## 🧭 Available Routes

| Route | Alias | Template | Description |
| :--- | :--- | :--- | :--- |
| `/` | `/index.html` | `templates/index.html` | Landing Page |
| `/home` | `/home.html` | `templates/home.html` | Home Page |
| `/about` | `/au`, `/au.html` | `templates/au.html` | About Us |
| `/admission` | `/adm`, `/adm.html` | `templates/adm.html` | Admissions |
| `/faculty` | `/fac`, `/fac.html` | `templates/fac.html` | Faculty |
| `/infrastructure` | `/infra`, `/infra.html` | `templates/infra.html` | Infrastructure & Labs |
| `/gallery` | `/gal`, `/gal.html` | `templates/gal.html` | Photo Gallery |
