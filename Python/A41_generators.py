# generators are a simple way of creating iterators. 
# They are written like regular functions but use the yield statement whenever they want to return data. 
# Each time next() is called on it, the generator resumes where it left off (it remembers all the data values and which statement was last executed).
# An example of a generator function is shown below:
def func():
    for i in range(5):
        yield i
# this will return a generator object
g = func()
# we can use next() to get the next value from the generator
print(next(g))  # Output: 0
print(next(g))  # Output: 1
print(next(g))  # Output: 2
print(next(g))  # Output: 3
print(next(g))  # Output: 4
#  this is the normal way to represent the above function
'''def func():
    for i in range(5):
        print(i)
func()'''