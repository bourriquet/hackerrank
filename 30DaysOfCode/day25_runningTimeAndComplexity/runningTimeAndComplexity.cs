using System;
using System.Collections.Generic;
using System.IO;

class Solution {
    static void Main(String[] args) {
        int n = Convert.ToInt32(Console.ReadLine());
        
        for (int i = 0; i < n; i++) {
            int num = Convert.ToInt32(Console.ReadLine());
            Boolean prime = true;
            
            if (num < 2) {
                Console.WriteLine("Not prime");
            } else if (num <= 3) {
                Console.WriteLine("Prime");
            } else if (num % 2 == 0 || num % 3 == 0) {
                Console.WriteLine("Not prime");
            } else {
                for (int j = 5; j <= Math.Sqrt(num); j += 2) {
                    if (num % j == 0) {
                        Console.WriteLine("Not prime");
                        prime = false;
                        break;
                    }
                }
                
                if (prime) {
                    Console.WriteLine("Prime");
                }
            }
        }
    }
}
