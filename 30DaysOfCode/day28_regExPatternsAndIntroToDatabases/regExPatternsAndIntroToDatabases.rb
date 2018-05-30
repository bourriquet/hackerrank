#!/bin/ruby

require 'json'
require 'stringio'

N = gets.to_i
names = []

for i in (0..N-1) do
    firstName, emailID = gets.strip.split(' ')
    
    if emailID.match('\w+@gmail.com$')
        names.push(firstName)
    end
end

puts names.sort
