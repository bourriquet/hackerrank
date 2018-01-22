#!/bin/python3

n = int(input().strip())
arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]

for i in range(0, n):
    print(str(arr[n-1-i]), end=" ")
