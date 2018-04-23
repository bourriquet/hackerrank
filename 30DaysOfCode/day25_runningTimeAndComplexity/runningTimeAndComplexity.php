<?php
$_fp = fopen("php://stdin", "r");

fscanf($_fp, "%d", $n);

for ($i = 0; $i < $n; $i++) {
    fscanf($_fp, "%d", $num);
    $flag = true;
    
    if ($num < 2) {
        echo "Not prime\n";
    } else if ($num <= 3) {
        echo "Prime\n";
    } else if ($num % 2 == 0 || $num % 3 == 0) {
        echo "Not prime\n";
    } else {
        for ($j = 5; $j < sqrt($num); $j += 2) {
            if ($num % $j == 0) {
                echo "Not prime\n";
                $flag = false;
                break;
            }
        }
        
        if ($flag) {
            echo "Prime\n";
        }
    }
}

?>
