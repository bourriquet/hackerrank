using System;
using System.Collections.Generic;
using System.IO;

class Solution {
    private LinkedList<char> s;
    private LinkedList<char> q;
    
    public Solution() {
        s = new LinkedList<char>();
        q = new LinkedList<char>();
    }
    
    public void pushCharacter(char c) {
        s.AddFirst(c);
    }
    
    public void enqueueCharacter(char c) {
        q.AddFirst(c);
    }
    
    public char popCharacter() {
        char c = s.Last.Value;
        s.RemoveLast();
        return c;
    }
    
    public char dequeueCharacter() {
        char c = q.First.Value;
        q.RemoveFirst();
        return c;
    }
    
    static void Main(String[] args) {
        string s = Console.ReadLine();
        Solution obj = new Solution();
        
        foreach (char c in s) {
            obj.pushCharacter(c);
            obj.enqueueCharacter(c);
        }
        
        bool isPalindrome = true;
        
        for (int i = 0; i < s.Length / 2; i++) {
            if (obj.popCharacter() != obj.dequeueCharacter()) {
                isPalindrome = false;
                
                break;
            }
        }

        if (isPalindrome) {
            Console.Write("The word, {0}, is a palindrome.", s);
        } else {
            Console.Write("The word, {0}, is not a palindrome.", s);
        }
    }
}
