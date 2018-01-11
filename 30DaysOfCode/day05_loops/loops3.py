#!/bin/python3

n = int(input().strip())
x = range(1, 11)

for i in x:
    res = n * i
    print(n, "x", i, "=", res)
