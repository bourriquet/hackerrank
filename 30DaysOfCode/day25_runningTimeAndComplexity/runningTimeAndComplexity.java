import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        
        for (int i = 0; i < n; i++) {
            int num = in.nextInt();
            Boolean flag = true;
            
            if (num < 2) {
                System.out.println("Not prime");
            } else if (num <= 3) {
                System.out.println("Prime");
            } else if (num % 2 == 0 || num % 3 == 0) {
                System.out.println("Not prime");
            } else {
                for (int j = 5; j < Math.sqrt(num); j += 2) {
                    if (num % j == 0) {
                        System.out.println("Not prime");
                        flag = false;
                    }
                }
                
                if (flag) {
                    System.out.println("Prime");
                }
            }
        }
    }
}
