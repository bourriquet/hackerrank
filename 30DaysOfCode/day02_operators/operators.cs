using System;
using System.Collections.Generic;
using System.IO;

class Solution {
    static void Main(String[] args) {
        double cost = Convert.ToDouble(Console.ReadLine());
        int tip = Convert.ToInt32(Console.ReadLine());
        int tax = Convert.ToInt32(Console.ReadLine());
        
        int total = (int) Math.Round(cost + (0.01 * tip * cost) + (0.01 * tax * cost));
        
        Console.WriteLine("The total meal cost is " + total + " dollars.");
    }
}
