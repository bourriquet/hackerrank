<?php
$_fp = fopen("php://stdin", "r");

$N = fgets($_fp);

for ($i = 0; $i < $N; $i++) {
    $x = trim(fgets($_fp));
    
    for ($j = 0; $j < strlen($x); $j += 2) {
        printf(substr($x, $j, 1));
    }
    printf(" ");
    
    for ($j = 1; $j < strlen($x); $j += 2) {
        printf(substr($x, $j, 1));
    }
    printf("\n");
}
?>
