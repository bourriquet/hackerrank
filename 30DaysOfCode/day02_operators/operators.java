import java.util.*;
import java.math.*;

public class Arithmetic {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        double mealCost = scan.nextDouble();
        int tip = scan.nextInt();
        int tax = scan.nextInt();
        scan.close();
      
        int total = (int) Math.round(mealCost + (0.01 * tip * mealCost) + (0.01 * tax * mealCost));
      
        System.out.println("The total meal cost is " + total + " dollars.");
    }
}
