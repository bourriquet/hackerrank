d1, m1, y1 = gets.strip.split(' ').map(&:to_i)
d2, m2, y2 = gets.strip.split(' ').map(&:to_i)

if (y1 > y2)
    print(10000)
elsif (y1 == y2)
    if (m1 > m2)
        fine = 500 * (m1 - m2)
        print(fine)
    elsif (m1 == m2)
        if (d1 > d2)
            fine = 15 * (d1 - d2)
            print(fine)
        else
            print(0)
        end
    else
        print(0)
    end
else
    print(0)
end
