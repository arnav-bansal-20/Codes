# 1c48f6b6bfe8495782f7582804c00835
import requests
import json
# Your API key (replace with your own)
API_KEY = "1c48f6b6bfe8495782f7582804c00835"

# Topic you want news for
topic = input("Enter the topic you want to read about : ")

# API endpoint
url = f"https://newsapi.org/v2/everything?q={topic}&apiKey={API_KEY}"

# Send request
response = requests.get(url)
news = json.loads(response.text)
for article in news["articles"]:
    print(article["title"])
    print(article["description"])
    print("-----------------------------------------------")