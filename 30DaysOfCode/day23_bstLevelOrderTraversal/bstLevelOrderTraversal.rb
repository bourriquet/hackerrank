class Node
    attr_accessor :left, :right, :data
    def initialize data
        @left = @right = nil
        @data = data
    end
end

class Solution
    def insert (root, data)
        if root == nil
            return Node.new(data)
        else
            if data <= root.data
                cur = self.insert(root.left, data)
                root.left = cur
            else
                cur = self.insert(root.right, data)
                root.right = cur
            end
        end
        
        return root
    end
    
    def levelOrder(root)
        @q = []
        @q.push(root)
        
        while (@q.length > 0) do
            first_node = @q.shift
            print(first_node.data, " ")
            
            if (first_node.left != nil)
                @q.push(first_node.left)
            end
            if (first_node.right != nil)
                @q.push(first_node.right)
            end
        end
    end
end

myTree = Solution.new
root = nil
T = gets.to_i

for i in 1..T
    data = gets.to_i
    root = myTree.insert(root, data)
end

myTree.levelOrder(root)
