import java.io.*;
import java.util.*;

class Node {
    int data;
    Node next;
    Node(int d) {
        data = d;
        next = null;
    }
}

class Solution {
    public static Node removeDuplicates(Node head) {
        Node currentNode = head;
        
        while (currentNode.next != null) {
            Node nextNode = currentNode.next;
            
            if (nextNode.data == currentNode.data) {
                currentNode.next = nextNode.next;
            } else {
                currentNode = nextNode;
            }
        }
        
        return head;
    }
    
    public static Node insert(Node head, int data) {
        Node p = new Node(data);			
        
        if (head == null)
            head = p;
        else if (head.next == null)
            head.next = p;
        else {
            Node start = head;
            while (start.next != null)
                start = start.next;
            start.next = p;
        }
        
        return head;
    }
    
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        Node head = null;
        int T = sc.nextInt();
        
        while (T-- > 0) {
            int ele = sc.nextInt();
            head = insert(head, ele);
        }

        head = removeDuplicates(head);
        display(head);
    }
}
