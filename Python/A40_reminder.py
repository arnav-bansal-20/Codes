import time
import os

def remind(interval_minutes):
    while True:
        time.sleep(interval_minutes * 60)
        print("💧 Time to drink water!")

        # Beep sound (works best on Windows)
        try:
            import winsound
            winsound.Beep(1000, 500)  # frequency, duration
        except:
            print('\a')  # fallback beep

# Run every 60 minutes
remind(60)