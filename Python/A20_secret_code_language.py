# write a program that convert message into secret code language
# use the rules to convert message into single code
# coding:
# if the word conatins 3 letters then appens the first letter at the end of the word
# now append three random characters at start and end
# else 
# simply reverse the string
#  decoding:
# if the words conatain less than three charaters then reverse it
# else: remove 3 random characters from start and end and then move the last letter to the start of the word 
# your program should ask whether you want to code orr decode
choice = input("Do you want to code or decode? (Enter 'code' or 'decode'): ")
words = input("Enter the message: ")
if (choice == "code"):
    for word in words:
        if(len(word)>=3):
            nwords = [] 
            r1 = "abc"
            r2 = "xyz"
            st = r1 + word[1:]+word[0] + r2
            nwords.append(st)
            print(" ".join(nwords))
        else:
            nwords.append(word[::-1])
    print(" ".join(nwords))
    
else:
    for word in words:
        if(len(word)>=3):
            nwords = []
            st = word[3:-3]
            st = st[-1]+st[:-1]
            nwords.append(st)
            print(" ".join(nwords))
        else:
            nwords.append(word[::-1])
    print(" ".join(nwords))
    