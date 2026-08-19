from tkinter import N


class person:
    # default constructor
    # def __init__(self):
    #     print("jb")
        # parameterized constructor
    def __init__(self, n, o, w):
            self.name = n
            self.occupation = o
            self.networth = w
    def info(self):
        print(f"{self.name} is a {self.occupation} and it's networth is {self.networth}cr")
    
obj = person("arnav", "developer", 10)
obj.info()
