<?php

$stdin = fopen("php://stdin", "r");

fscanf($stdin, "%d\n", $N);

$names = array();

for ($N_itr = 0; $N_itr < $N; $N_itr++) {
    fscanf($stdin, "%[^\n]", $firstNameEmailID_temp);
    $firstNameEmailID = explode(' ', $firstNameEmailID_temp);
    $firstName = $firstNameEmailID[0];
    $emailID = $firstNameEmailID[1];
    
    $pattern = '/\w+@gmail.com$/';
    
    if (preg_match($pattern, $emailID)) {
        $names[] = $firstName;
    }
}

sort($names);

foreach ($names as $i) {
    echo $i . "\n";
}

fclose($stdin);
