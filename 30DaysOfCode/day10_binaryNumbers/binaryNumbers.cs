using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class Solution {

    static void Main(String[] args) {
        int n = Convert.ToInt32(Console.ReadLine());
        
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
        
        Console.WriteLine(max);
    }
}
