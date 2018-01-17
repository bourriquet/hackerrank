using System;
using System.Collections.Generic;
using System.IO;
class Solution {
    static void Main(String[] args) {
        int T;
        T = Convert.ToInt32(Console.ReadLine());
        
        for (int i = 0; i < T; i++) {
            string S;
            S = Console.ReadLine();
            
            for (int j = 0; j < S.Length; j += 2) {
                Console.Write(S[j]);
            }
            Console.Write(" ");
            for (int j = 1; j < S.Length; j += 2) {
                Console.Write(S[j]);
            }
            Console.Write("\n");
        }
    }
}
