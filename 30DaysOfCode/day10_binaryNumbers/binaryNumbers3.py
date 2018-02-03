#!/bin/python3

import sys

n = int(input().strip())

count = 0
maxCount = 0

while n > 0:
    if n % 2 == 1:
        count += 1
        if count > maxCount:
            maxCount = count
    else:
        count = 0
    n = int(n / 2)
    
print(maxCount)
