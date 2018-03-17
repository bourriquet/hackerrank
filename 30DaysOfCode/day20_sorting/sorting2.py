#!/bin/python

import sys

n = int(raw_input().strip())
a = map(int, raw_input().strip().split(' '))
num_swaps = 0

for i in range(0, n):
    for j in range(0, n-i-1):
        if a[j] > a[j+1]:
            temp = a[j]
            a[j] = a[j+1]
            a[j+1] = temp
            num_swaps += 1
            
print "Array is sorted in", num_swaps, "swaps."
print "First Element:", a[0]
print "Last Element:", a[n-1]
