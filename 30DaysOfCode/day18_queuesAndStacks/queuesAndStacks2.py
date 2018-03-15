import sys

class Solution:
    def __init__(self):
        self.s = []
        self.q = []
    
    def pushCharacter(self, ch):
        self.s.append(ch)
        
    def enqueueCharacter(self, ch):
        self.q.append(ch)
        
    def popCharacter(self):
        return self.s.pop()
        
    def dequeueCharacter(self):
        return self.q.pop(0)
        
s = raw_input()
obj = Solution()   
l = len(s)

for i in range(l):
    obj.pushCharacter(s[i])
    obj.enqueueCharacter(s[i])
    
isPalindrome=True

for i in range(l/2):
    if obj.popCharacter() != obj.dequeueCharacter():
        isPalindrome = False
        break

if isPalindrome:
    sys.stdout.write ("The word, " + s + ", is a palindrome.")
else:
    sys.stdout.write ("The word, " + s + ", is not a palindrome.") 
