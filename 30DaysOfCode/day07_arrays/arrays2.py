#!/bin/python
import sys

n = int(raw_input().strip())
arr = map(int, raw_input().strip().split(' '))

for i in range(0, n):
    sys.stdout.write(str(arr[n-1-i]))
    sys.stdout.write(" ")
