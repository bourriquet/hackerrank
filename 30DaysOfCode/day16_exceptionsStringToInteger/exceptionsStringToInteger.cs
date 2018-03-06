using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

class Solution {
    static void Main(String[] args) {
        string S = Console.ReadLine();
        
        try {
            Int32.Parse(S);
            Console.WriteLine(S);
        } catch (FormatException) {
            Console.WriteLine("Bad String");
        }
    }
}
