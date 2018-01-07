#!/bin/ruby

N = gets.strip.to_i

if (N % 2 == 1)
    puts "Weird"
else
    if (N >= 2 and N <= 5)
        puts "Not Weird"
    elsif (N >= 5 and N <= 20)
        puts "Weird"
    else
        puts "Not Weird"
    end
end
