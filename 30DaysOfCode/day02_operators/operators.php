<?php
$handle = fopen ("php://stdin","r");
$mealCost = fgets($handle);
$tip = fgets($handle);
$tax = fgets($handle);

$total = round($mealCost + (0.01 * $tip * $mealCost) + (0.01 * $tax * $mealCost));

echo "The total meal cost is " . $total . " dollars.";
?>
