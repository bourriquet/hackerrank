import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int dayReturned = sc.nextInt();
        int monthReturned = sc.nextInt();
        int yearReturned = sc.nextInt();
        int dayExpected = sc.nextInt();
        int monthExpected = sc.nextInt();
        int yearExpected = sc.nextInt();
        
        if (yearReturned > yearExpected) {
            System.out.println(10000);
        } else if (yearReturned == yearExpected) {
            if (monthReturned > monthExpected) {
                int fine = 500 * (monthReturned - monthExpected);
                System.out.println(fine);
            } else if (monthReturned == monthExpected) {
                if (dayReturned > dayExpected) {
                    int fine = 15 * (dayReturned - dayExpected);
                    System.out.println(fine);
                } else {
                    System.out.println(0);
                }
            } else {
                System.out.println(0);
            }
        } else {
            System.out.println(0);
        }
    }
}
