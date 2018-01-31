#!/bin/bash

fact=1
factorial() {
    if [ $1 -eq 1 ]; then
        return 1
    else
        factorial $(( $1-1 ))
        fact=$(( $fact*$1 ))
    fi
        
}

read num
factorial $num
echo $fact
