# MAp
# def cube(x):
#     return x*x*x
l = [1,2,3,4,5,6]
newl = list(map(lambda x: x*x*x, l))
# newl = list(map(cube ,l))
print(newl)

#  filter
# def filter_function(a):
#     return a>2
# new_newl = list(filter(filter_function, l))
new_newl = list(filter(lambda x: x%2 == 0, newl))
print(new_newl)

# reduce
from functools import reduce
sum = reduce(lambda x, y : x+y, l)
print(sum)