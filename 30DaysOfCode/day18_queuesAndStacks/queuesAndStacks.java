import java.io.*;
import java.util.*;

public class Solution {
    private static Stack<Character> s = new Stack<Character>();
    private static Queue<Character> q = new LinkedList<Character>();
    
    public static void pushCharacter(char c) {
        s.push(new Character(c));
    }
    
    public static void enqueueCharacter(char c) {
        q.add(new Character(c));
    }
    
    public static char popCharacter() {
        return (char)s.pop();
    }
    
    public static char dequeueCharacter() {
        return (char)q.remove();
    }
    
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String input = scan.nextLine();
        scan.close();

        char[] s = input.toCharArray();
        Solution p = new Solution();

        for (char c : s) {
            p.pushCharacter(c);
            p.enqueueCharacter(c);
        }

        boolean isPalindrome = true;
        for (int i = 0; i < s.length/2; i++) {
            if (p.popCharacter() != p.dequeueCharacter()) {
                isPalindrome = false;                
                break;
            }
        }

        System.out.println( "The word, " + input + ", is " + ( (!isPalindrome) ? "not a palindrome." : "a palindrome." ) );
    }
}
