T = int(input())

for i in range(0, T):
    S = str(input())
    
    i = 0
    while i < len(S):
        print(S[i], end="")
        i += 2
    print(" ", end="")
    
    i = 1
    while i < len(S):
        print(S[i], end="")
        i += 2
    print("")
