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
        
    def levelOrder(self,root):
        q = []
        q.append(root)
        
        while (len(q) > 0):
            first_node = q.pop(0)
            print(first_node.data, end=" ")
            
            if (first_node.left):
                q.append(first_node.left)
            if (first_node.right):
                q.append(first_node.right)
                
T = int(input())
myTree = Solution()
root = None

for i in range(T):
    data = int(input())
    root = myTree.insert(root, data)
    
myTree.levelOrder(root)
