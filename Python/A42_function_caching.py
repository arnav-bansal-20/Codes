# function caching
import time
from functools import lru_cache
# @lru_cache(maxsize=None)  # Cache results of the function
@lru_cache(maxsize=128)  # Cache results of the function with a maximum size of 128   
def fibonnaci(n):
    if n<=1:
        return n
    else:
        return fibonnaci(n-1) + fibonnaci(n-2)
start_time = time.time()
print(fibonnaci(35))
print(f"Time taken: {time.time() - start_time}")

# this is the normal way to represent the above function
'''import time
def fibonnaci(n):
    if n<=1:
        return n
    else:
        return fibonnaci(n-1) + fibonnaci(n-2)
start_time = time.time()
print(fibonnaci(35))
print(f"Time taken: {time.time() - start_time}")'''