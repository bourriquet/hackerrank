N = gets.strip.to_i

(0..N-1).each do |i|
    Num = STDIN.readline.strip.to_i
    flag = true
    
    if (Num < 2)
        print("Not prime\n")
    elsif (Num <= 3)
        print("Prime\n")
    elsif(Num % 2 == 0 or Num % 3 == 0)
        print ("Not prime\n")
    else
        for j in (5..(Math.sqrt(Num) + 1)).step(2)
            if (Num % j == 0)
                print("Not prime\n")
                flag = false
                break
            end
        end
        
        if (flag == true)
            print("Prime\n")
        end
    end
end
