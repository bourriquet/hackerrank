using System;
using System.Collections.Generic;
using System.IO;
class Solution {
    static void Main(String[] args) {
        var tel = new Dictionary<string, string>();
        
        int N = Convert.ToInt32(Console.ReadLine());
        
        for (int i = 0; i < N; i++) {
            string[] x = Console.ReadLine().Split();
            tel[x[0]] = x[1];
        }
        
        string q;
        while ((q = Console.ReadLine()) != null) {
            if (tel.ContainsKey(q)) {
                Console.WriteLine(q + "=" + tel[q]);
            } else {
                Console.WriteLine("Not found");
            }
        }
    }
}
