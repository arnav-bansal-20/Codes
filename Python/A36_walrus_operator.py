# without walrus
n = len("hello")
if n > 3:
    print(n)

# with walrus
# walrus operator help us to assign value to a variable as well as return that value at same time.
if (n := len("hello")) > 3:
    print(n)