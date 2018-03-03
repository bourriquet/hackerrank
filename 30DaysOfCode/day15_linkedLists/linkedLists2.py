class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        
class Solution:
    def display(self, head):
        current = head
        while current:
            print current.data,
            current = current.next
            
    def insert(self, head, data): 
        newNode = Node(data)
        
        if (head == None):
            return newNode
        else:
            node = head
            
            while (node.next):
                node = node.next
            node.next = newNode
            
            return head        
    
mylist = Solution()
T = int(input())
head = None

for i in range(T):
    data = int(input())
    head = mylist.insert(head, data)   
    
mylist.display(head);
