T = gets.strip.to_i

for i in 0..T do
    S = gets.strip
    
    j = 0
    while j < S.length do
        print(S[j])
        j += 2
    end
    print(" ")
    
    j = 1
    while j < S.length do
        print(S[j])
        j += 2
    end
    print("\n")
end
