# classs method
class employee:
    company = "Apple"
    def show(self):
        print(f"the name is {self.name} and company is {self.company}")
    @classmethod
    def changecompanyname(cls, newcompany):
        cls.company = newcompany

e1 = employee()
e1.name = "arnav"
e1.show()
e1.changecompanyname("Tesla")
e1.show()
print(employee.company)

# class methods as alternative constructors
'''class employee:
    company = "Apple"
    def __init__(self, name, salary):
        self.name = name
        self.salary = salary
    @classmethod
    def fromStr(cls, string):
        return cls(string.split("-")[0], string.split("-")[1])

e = employee("Arnav", 12000)
print(e.name)
print(e.salary)
string = "John-12000"
e1 = employee.fromStr(string)
print(e1.name)
print(e1.salary)'''

# super() keyword
'''class parentclass:
    def parent_method(self):
        print("this is the parent method")

class childclass(parentclass):
    def parent_method(self):
        print("Harry")
        super().parent_method()
    def child_method(self):
        print("this is the child method")
        super().parent_method
        
child_obj = childclass()
child_obj.child_method()
child_obj.parent_method()'''

# magic/dunder methods in python

class employee:
    name = "Harry"
    def __len__(self):
        i = 0
        for c in self.name:
            i+=1
        return i
            
            
e = employee()
print(e.name) 
print(len(e))

# method overriding
'''class shape:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    def area(self):
        return self.x * self.y
    
class circle(shape):
    def __init__(self, radius):
        self.radius = radius
        super().__init__(radius, radius)
    def area(self):
        return 3.14 * super().area()
        
obj = circle(5)
print(obj.area())'''