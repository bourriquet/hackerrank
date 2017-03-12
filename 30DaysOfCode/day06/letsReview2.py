import sys

T = int(raw_input())

for i in range(0, T):
    S = str(raw_input())
    
    i = 0
    while i < len(S):
        sys.stdout.write(S[i])
        i += 2
    sys.stdout.write(" ")
    
    i = 1
    while i < len(S):
        sys.stdout.write(S[i])
        i += 2
    sys.stdout.write("\n")
