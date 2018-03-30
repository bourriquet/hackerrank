<?php

$handle = fopen ("php://stdin", "r");
fscanf($handle, "%d",$n);
$a_temp = fgets($handle);
$a = explode(" ",$a_temp);
$a = array_map('intval', $a);

$numSwaps = 0;

for ($i = 0; $i < $n; $i++) {
    $maxIndex = $n - $i - 1;
    for ($j = 0; $j < $maxIndex; $j++) {
        if ($a[$j] > $a[$j + 1]) {
            $copy = $a[$j];
            $a[$j] = $a[$j + 1];
            $a[$j + 1] = $copy;
            $numSwaps++;
        }
    }
}

echo "Array is sorted in " . $numSwaps . " swaps.\n";
echo "First Element: " . $a[0] . "\n";
echo "Last Element: " . $a[$n - 1] . "\n";

?>
