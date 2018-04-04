using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;

class Node {
    public Node left, right;
    public int data;
    
    public Node(int data) {
        this.data = data;
        left = right = null;
    }
}

class Solution {
    static void levelOrder(Node root){
  		List<Node> q = new List<Node>();
        q.Add(root);
        
        while (q.Count > 0) {
            Node firstNode = q[0];
            Console.Write(firstNode.data + " ");
            
            if (firstNode.left != null)
                q.Add(firstNode.left);
            if (firstNode.right != null)
                q.Add(firstNode.right);
            
            if (q.Count > 0) {
                q.RemoveAt(0);
            }
        }
    }
    
    static Node insert(Node root, int data) {
        if (root == null) {
            return new Node(data);
        } else {
            Node cur;
            if (data <= root.data) {
                cur = insert(root.left, data);
                root.left = cur;
            } else {
                cur = insert(root.right, data);
                root.right = cur;
            }
            return root;
        }
    }
    
    static void Main(String[] args) {
        Node root = null;
        int T = Int32.Parse(Console.ReadLine());
        
        while (T-- > 0) {
            int data = Int32.Parse(Console.ReadLine());
            root = insert(root, data);            
        }
        levelOrder(root);
    }
}