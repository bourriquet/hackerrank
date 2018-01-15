#!/usr/bin/perl

$n = <STDIN>;
chomp $n;

for ($i = 1; $i <= 10; $i++) {
    print $n, " x ", $i, " = ", ($n * $i), "\n";
}
