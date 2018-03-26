<?php

interface AdvancedArithmetic {
    public function divisorSum($n);
}

class Calculator implements AdvancedArithmetic {
    public function divisorSum($n) {
        $sum = 0;
        
        for ($i = 1; $i <= $n/2; $i++) {
            if ($n % $i == 0) {
                $sum += $i;
            }
        }
        
        $sum += $n;
        
        return $sum;
    }
}

$n = intval(fgets(STDIN));
$myCalculator = new Calculator();
if ($myCalculator instanceof AdvancedArithmetic) {
    $sum = $myCalculator->divisorSum($n);
    echo "I implemented: AdvancedArithmetic\n" . $sum;
} else {
    echo "Wrong answer";
}

?>
