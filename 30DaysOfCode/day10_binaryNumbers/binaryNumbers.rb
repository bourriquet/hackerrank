#!/bin/ruby

n = gets.strip.to_i
max = 0
count = 0

while n > 0 do
    if n % 2 == 1
        count += 1
        if count > max
            max = count
        end
    else
        count = 0
    end
    
    n /= 2
end
    
puts max
