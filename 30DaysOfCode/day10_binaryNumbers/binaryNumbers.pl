#!/usr/bin/perl

$n = <STDIN>;
chomp $n;

$max = 0;
$count = 0;

while ($n > 0) {
    if ($n % 2 == 1) {
        $count++;
        if ($count > $max) {
            $max = $count;
        }
    } else {
        $count = 0;
    }
    
    $n /= 2;
}

print $max;
