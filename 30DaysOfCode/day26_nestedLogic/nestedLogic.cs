using System;
using System.Collections.Generic;
using System.IO;

class Solution {
    static void Main(String[] args) {
        string[] date1 = Console.ReadLine().Split(' ');
        int[] dateReturned = Array.ConvertAll(date1, Int32.Parse);
        
        string[] date2 = Console.ReadLine().Split(' ');
        int[] dateExpected = Array.ConvertAll(date2, Int32.Parse);
        
        if (dateReturned[2] > dateExpected[2]) {
            Console.WriteLine(10000);
        } else if (dateReturned[2] == dateExpected[2]) {
            if (dateReturned[1] > dateExpected[1]) {
                int fine = 500 * (dateReturned[1] - dateExpected[1]);
                Console.WriteLine(fine);
            } else if (dateReturned[1] == dateExpected[1]) {
                if (dateReturned[0] > dateExpected[0]) {
                    int fine = 15 * (dateReturned[0] - dateExpected[0]);
                    Console.WriteLine(fine);
                } else {
                    Console.WriteLine(0);
                }
            } else {
                Console.WriteLine(0);
            }
        } else {
            Console.WriteLine(0);
        }
    }
}
