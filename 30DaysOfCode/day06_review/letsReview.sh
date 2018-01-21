read T;

for (( i = 0; i < T; i++ )); do
    read S;
    
    for (( j = 0; j < ${#S}; j += 2 )); do
        printf ${S:$j:1};
    done
    printf " ";
    
    for (( j = 1; j < ${#S}; j += 2 )); do
        printf ${S:$j:1};
    done
    printf "\n";
done
