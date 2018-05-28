#!/bin/python3

import re

if __name__ == '__main__':
    N = int(input())
    names = []

    for N_itr in range(N):
        firstName, emailID = input().split()
        if re.search('\w+@gmail.com$', emailID):
            names.append(firstName)
    
    names.sort()
    for i in names:
        print(i)
