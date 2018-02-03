read n

max=0
count=0

while [ $n -gt 0 ]; do
    if [ $(( n % 2 )) == 1 ]; then
        count=$(( count + 1 ))
        if [ $count -gt $max ]; then
            max=$count
        fi
    else
        count=0
    fi
    
    n=$(( n/2 ))
done

echo $max
