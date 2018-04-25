from math import sqrt, ceil

n = int(input())

for i in range(1, (n + 1)):
    num = int(input())
    flag = True
    
    if (num < 2):
        print("Not prime")
    elif (num <= 3):
        print("Prime")
    elif (num % 2 == 0 or num % 3 == 0):
        print("Not prime")
    else:
        for j in range(5, int(ceil(sqrt(num))) + 1, 2):
            if (num % j == 0):
                print("Not prime")
                flag = False
                break
        
        if flag:
            print("Prime")
