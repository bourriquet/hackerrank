#!/bin/python3
import sys

arr = []
for arr_i in range(6):
   arr_t = [int(arr_temp) for arr_temp in input().strip().split(' ')]
   arr.append(arr_t)

max_hour = (-9 * 7)
    
for i in range(4):
    for j in range(4):
        sum_hour = 0
        sum_hour += (arr[i][j] + arr[i][j+1] + arr[i][j+2])
        sum_hour += (arr[i+1][j+1])
        sum_hour += (arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2])
        
        if (sum_hour > max_hour):
            max_hour = sum_hour
            
print(max_hour)
