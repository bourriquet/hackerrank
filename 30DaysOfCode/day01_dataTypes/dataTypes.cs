using System;
using System.Collections.Generic;
using System.IO;

class Solution {
    static void Main(String[] args) {
        int i = 4;
        double d = 4.0;
        string s = "HackerRank ";
        
        int another_i = Convert.ToInt32(Console.ReadLine());;
        double another_d = Convert.ToInt32(Console.ReadLine());
        string another_s = Console.ReadLine();

        Console.WriteLine(i + another_i);
        Console.WriteLine(String.Format("{0:0.0}", d + another_d));
        Console.WriteLine(s + another_s); 
    }
}
