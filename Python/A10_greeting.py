# a = int(input("Enter time in 24 hour format: "))
# if a<12:
#     print("Good Morning")
# elif (a>=12 and a<16):
#     print("Good Afternoon")
# else:
#     print("Good Evening")

# import time
# timestamp = time.strftime("%H:%M:%S")
# print("Current Time is: ", timestamp)
# if timestamp < "12:00:00":
#     print("Good Morning")
# elif timestamp >= "12:00:00" and timestamp < "16:00:00":
#     print("Good Afternoon")
# else:
#     print("Good Evening")

import time
timestamp = time.strftime("%H:%M:%S")
hour = int(time.strftime("%H"))
if hour < 12:
    print("Good Morning")   
elif hour >= 12 and hour < 16:
    print("Good Afternoon")
else:
    print("Good Evening")