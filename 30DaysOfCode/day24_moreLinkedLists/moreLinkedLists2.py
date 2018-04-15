class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        
class Solution: 
    def insert(self, head, data):
        p = Node(data)           
  
        if head == None:
            head = p
        elif head.next == None:
            head.next = p
        else:
            start = head
            while (start.next != None):
                start = start.next
            start.next=p
        return head
        
    def display(self, head):
        current = head
        while current:
            print current.data
            current = current.next
            
    def removeDuplicates(self, head):
        current_node = head
        
        while current_node.next:
            next_node = current_node.next
            
            if (next_node.data == current_node.data):
                current_node.next = next_node.next
            else:
                current_node = next_node
        
        return head
        
mylist = Solution()
T = int(input())
head = None

for i in range(T):
    data = int(input())
    head = mylist.insert(head, data)
    
head = mylist.removeDuplicates(head)
mylist.display(head); 
