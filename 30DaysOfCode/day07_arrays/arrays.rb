#!/bin/ruby

n = gets.strip.to_i
arr = gets.strip
arr = arr.split(' ').map(&:to_i)

i = n-1

while i >= 0 do
    print arr[i], " "
    i -= 1
end
