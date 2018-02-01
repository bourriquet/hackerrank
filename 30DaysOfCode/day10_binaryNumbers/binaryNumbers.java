import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        
        int max = 0;
        int count = 0;
        
        while (n > 0) {
            if (n % 2 == 1) {
                count++;
                if (count > max) {
                    max = count;
                }
            } else {
                count = 0;
            }
            
            n /= 2;
        }
        
        System.out.println(max);
    }
}
