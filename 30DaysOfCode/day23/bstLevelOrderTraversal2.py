import sys

class Node:
    def __init__(self, data):
        self.right = self.left = None
        self.data = data
        
class Solution:
    def insert(self, root, data):
        if root == None:
            return Node(data)
        else:
            if data <= root.data:
                cur = self.insert(root.left, data)
                root.left = cur
            else:
                cur = self.insert(root.right, data)
                root.right = cur
        return root
    
    def levelOrder(self, root):
        n = root
        q = []
        
        while n:
            sys.stdout.write(str(n.data))
            sys.stdout.write(" ")
            
            if n.left:
                q.append(n.left)
            if n.right:
                q.append(n.right)
                
            if len(q) > 0:
                n = q.pop(0)
            else:
                n = None


T = int(raw_input())
myTree = Solution()
root = None

for i in range(T):
    data = int(raw_input())
    root = myTree.insert(root, data)
    
myTree.levelOrder(root)
