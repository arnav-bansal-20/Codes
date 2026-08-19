# multiple inheritance
'''class employee:
    def __init__(self, name):
        self.name = name

class dancer:
    def __init__(self, dance):
        self.dance = dance
        
    def show(self):
        print(f"the dance is {self.dance}")
        
class danceremployee(employee, dancer):
    def __init__(self, dance, name):
        self.dance = dance
        self.name = name
        
o = danceremployee("kathak", "shivani")
print(o.name)
print(o.dance)
o.show()
print(danceremployee.mro())'''

#  multilevel inheritance
#Base class
'''class Animal:
    def eat(self):
        print("Animal can eat")
# Derived from Animal
class Dog(Animal):
    def bark(self):
        print("Dog barks")
# Derived from Dog (multilevel)
class Puppy(Dog):
    def weep(self):
        print("Puppy weeps")
# Create object
p = Puppy()
# Access all methods
p.eat()    # from Animal
p.bark()   # from Dog
p.weep()   # from Puppy'''

#  hierarchial inheritance
# Base class
'''class Animal:
    def eat(self):
        print("Animal eats")
# Child class 1
class Dog(Animal):
    def bark(self):
        print("Dog barks")
# Child class 2
class Cat(Animal):
    def meow(self):
        print("Cat meows")
# Objects
d = Dog()
c = Cat()
d.eat()
d.bark()
c.eat()
c.meow()'''

# hybrid inheritance

# Base class
'''class A:
    def show_A(self):
        print("Class A")
# Derived from A
class B(A):
    def show_B(self):
        print("Class B")
# Derived from A
class C(A):
    def show_C(self):
        print("Class C")
# Hybrid: inherits from B and C
class D(B, C):
    def show_D(self):
        print("Class D")
# Object
obj = D()
obj.show_A()
obj.show_B()
obj.show_C()
obj.show_D()'''