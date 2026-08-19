a = int(input("Enter the number : "))
match a:
    case 1:                   
    # match-case statement, similar to switch-case in other languages
    #break statement is not required in match-case, it automatically breaks after each case
        print("a is 1")
    case 2:
        print("a is 2")
    case 3:
        print("a is 3")
    case 4:
        print("a is 4")
    case _:  # default case
        print("a is something else")

