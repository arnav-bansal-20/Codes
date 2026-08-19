def greet(fx):
    def mfx():
        print("Good morning") 
        fx()
        print("thanks")
    return mfx
# decorator is a function which takes another function as an argument and extends the behaviour of that function without explicitly modifying it.
@greet
def hello():
    print("hello world")
hello()
# this is equivalent to greet(hello) 