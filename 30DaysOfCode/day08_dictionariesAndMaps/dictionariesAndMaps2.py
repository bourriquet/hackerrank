import sys

N = int(raw_input())
phonebook = {}

for i in range(0, N):
    S = str(raw_input()).split(" ")
    phonebook[S[0]] = S[1]
    
lines = sys.stdin.readlines()
for line in lines:
    if line.strip() in phonebook:
        print "%s=%s" %(line.strip(), phonebook[line.strip()])
    else:
        print "Not found"
