#!/bin/python3

import sys

n = int(input().strip())
a = [int(a_temp) for a_temp in input().strip().split(' ')]
num_swaps = 0

for i in range(0, n):
    for j in range(0, n-i-1):
        if a[j] > a[j+1]:
            temp = a[j]
            a[j] = a[j+1]
            a[j+1] = temp
            num_swaps += 1

print("Array is sorted in", num_swaps, "swaps.")
print("First Element:", a[0])
print("Last Element:", a[n-1])
