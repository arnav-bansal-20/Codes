def fact(n):
    if n == 0:
        return 1
    else:
        return n * fact(n - 1)
    print(fact(5))


def fib(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fib(n - 1) + fib(n - 2)
    print(fib(5))

def sum_list(lst):
    if len(lst) == 0:
        return 0
    else:
        return lst[0] + sum_list(lst[1:])
    print(sum_list([1, 2, 3, 4, 5]))
    