#!/bin/python

import re

if __name__ == '__main__':
    N = int(raw_input())
    names = []

    for N_itr in xrange(N):
        firstName, emailID = raw_input().split()
        if re.search('\w+@gmail.com$', emailID):
            names.append(firstName)
    
    names.sort()
    for i in names:
        print i
