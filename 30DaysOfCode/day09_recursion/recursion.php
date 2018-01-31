<?php

$handle = fopen ("php://stdin", "r");
function factorial($n) {
    if ($n <= 1) {
        return 1;
    }
    return $n * factorial($n - 1);
}

fscanf($handle, "%i",$n);
$result = factorial($n);
echo $result . "\n";

?>
