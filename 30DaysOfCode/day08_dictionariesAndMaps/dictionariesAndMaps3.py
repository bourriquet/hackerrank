import sys

N = int(input())
phonebook = {}

for i in range(0, N):
    S = str(input()).split(" ")
    phonebook[S[0]] = S[1]
    
lines = sys.stdin.readlines()
for line in lines:
    if line.strip() in phonebook:
        print(line.strip(), "=", phonebook[line.strip()], sep="")
    else:
        print("Not found")
