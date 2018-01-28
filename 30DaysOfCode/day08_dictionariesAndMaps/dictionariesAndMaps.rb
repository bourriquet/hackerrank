N = gets.chomp.to_i
tel = {}

(1..N).each do
    str = gets.strip
    strArr = str.split(' ')
    
    tel[strArr[0]] = strArr[1]
end

while query = gets
    query.strip!
    if tel.key? query
        print(query, "=", tel[query], "\n")
    else
        puts "Not found"
    end
end
