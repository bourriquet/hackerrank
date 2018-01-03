using System;
using System.Collections.Generic;
using System.IO;

class Solution {
    static void Main(String[] args) {
        int i = 4;
        double d = 4.0;
        string s = "HackerRank ";
        
        int another_i;
        double another_d;
        string another_s;

        another_i = Convert.ToInt32(Console.ReadLine());
        another_d = Convert.ToDouble(Console.ReadLine());
        another_s = Console.ReadLine();

        Console.WriteLine(i + another_i);
        Console.WriteLine(String.Format("{0:0.0}", d + another_d));
        Console.WriteLine(s + another_s); 
    }
}
