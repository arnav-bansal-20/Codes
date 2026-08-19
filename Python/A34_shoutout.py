import win32com.client

speaker = win32com.client.Dispatch("SAPI.SpVoice")

names = ["Arnav", "Rahul", "Priya", "Amit"]

for name in names:
    message = f"Shout out to {name}!"
    print(message)
    speaker.Speak(message)