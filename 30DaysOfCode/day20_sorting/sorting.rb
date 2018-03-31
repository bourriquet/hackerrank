#!/bin/ruby

n = gets.strip.to_i
a = gets.strip
a = a.split(' ').map(&:to_i)

num_swaps = 0

for i in 0..(n - 1) do
    max_index = n - i - 1
    for j in 0..(max_index - 1) do
        if (a[j] > a[j + 1])
            copy = a[j]
            a[j] = a[j + 1]
            a[j + 1] = copy
            num_swaps += 1
        end
    end
end

print("Array is sorted in ", num_swaps, " swaps.\n")
print("First Element: ", a[0], "\n")
print("Last Element: ", a[n-1], "\n")
