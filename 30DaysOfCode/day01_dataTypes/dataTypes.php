<?php
$handle = fopen ("php://stdin","r");
$i = 4;
$d = 4.0;
$s = "HackerRank ";

$another_i = fgets($handle);
$another_d = fgets($handle);
$another_s = fgets($handle);

echo $i + $another_i . "\n";
echo number_format($d + $another_d, 1) . "\n";
echo $s . $another_s;

fclose($handle);
?>
