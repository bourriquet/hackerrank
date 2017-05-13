read N

if [ $(($N % 2)) -eq 1 ]; then
    echo "Weird"
elif [ $N -ge 2 ] && [ $N -le 5 ]; then
    echo "Not Weird"
elif [ $N -ge 6 ] && [ $N -le 20 ]; then
    echo "Weird"
else
    echo "Not Weird"
fi
