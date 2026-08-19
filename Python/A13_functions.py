'''def gmean(a,b):
    mean =  (a*b)/(a+b)
    return mean
def isgreater(a,b):
    if a > b:
        return True
    else:
        return False
a = 9
b = 8
print(gmean(a,b))
print(isgreater(a,b)) '''

# function arguments
def add(a =5,b =10):
    return a+b

print(add()) # default arguments
print(add(3,4)) # positional arguments

# variable length arguments
def sum(*args):
    total = 0
    for i in args:
        total += i
    print("The sum is : ", total)
    return total