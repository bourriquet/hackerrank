#!/bin/ruby

S = gets.strip

begin
    print(Integer(S))
rescue
    print("Bad String")
end
