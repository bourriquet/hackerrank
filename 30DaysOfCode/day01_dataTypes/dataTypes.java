import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    public static void main(String[] args) {
        int i = 4;
        double d = 4.0;
        String s = "HackerRank ";
		
        Scanner scan = new Scanner(System.in);
        
        int another_i;
        double another_d;
        String another_s;

        another_i = scan.nextInt();
        another_d = scan.nextDouble();
        scan.nextLine();
        another_s = scan.nextLine();

        System.out.println(i + another_i);
	System.out.println(d + another_d);
        System.out.println(s + another_s);
        
        scan.close();
    }
}
