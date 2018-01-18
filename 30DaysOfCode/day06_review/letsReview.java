import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        int T = scan.nextInt();
        scan.nextLine();
        
        for (int i = 0; i < T; i++) {
            String S = scan.nextLine();
            
            for (int j = 0; j < S.length(); j += 2) {
                System.out.print(S.charAt(j));
            }
            System.out.print(" ");
            for (int j = 1; j < S.length(); j += 2) {
                System.out.print(S.charAt(j));
            }
            System.out.print("\n");
        }
    }
}
