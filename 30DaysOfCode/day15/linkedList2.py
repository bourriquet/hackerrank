class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
        
class Solution:
    def display(self,head):
        current = head
        while current:
            print current.data,
            current = current.next
            
    def insert(self,head,data):
        a = Node(data)
        
        if (head == None):
            head = a
        elif (head.next == None):
            head.next = a
        else:
            nextNode = head.next
            while (nextNode.next):
                nextNode = nextNode.next
            nextNode.next = a
        
        return head
        
mylist = Solution()
T = int(input())
head = None

for i in range(T):
    data = int(input())
    head = mylist.insert(head,data)    

mylist.display(head);
