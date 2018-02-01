#!/bin/python3

def convert_to_binary(num):
    num_bin = ""
    
    while num != 0:
        r = num % 2
        num_bin += str(r)
        num = int(num / 2)
        
    return num_bin
        
def consecutive_ones(num):
    num_bin = convert_to_binary(num)
    
    count = 0
    count_max = 0
    
    for i in range(0, len(num_bin)):
        if num_bin[i] == '1':
            count += 1
        else:
            count = 0
        
        if count > count_max:
            count_max = count
            
    return count_max
    

n = int(input().strip())
print(consecutive_ones(n))
