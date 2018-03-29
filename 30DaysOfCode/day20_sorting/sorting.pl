#!/usr/bin/perl

$n = <STDIN>;
chomp $n;
$a_temp = <STDIN>;
@a = split / /,$a_temp;
chomp @a;

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

print "Array is sorted in $numSwaps swaps.\n";
print "First Element: $a[0]\n";
print "Last Element: $a[n - 1]\n";
