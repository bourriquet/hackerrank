#!/bin/ruby

arr = Array.new(6)
for arr_i in (0..6-1)
    arr_t = gets.strip
    arr[arr_i] = arr_t.split(' ').map(&:to_i)
end

max = (-9 * 7)

for i in (0..3)
    for j in (0..3)
        sum = 0
        sum += arr[i][j] + arr[i][j+1] + arr[i][j+2]
        sum += arr[i+1][j+1]
        sum += arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]
        
        if (sum > max)
            max = sum
        end
    end
end

puts max
