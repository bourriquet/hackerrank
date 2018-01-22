#!/usr/bin/perl

$n = <STDIN>;
chomp $n;
$arr_temp = <STDIN>;
@arr = split / /,$arr_temp;
chomp @arr;

for ($i = $n-1; $i >= 0; $i--) {
    print @arr[$i], " ";
}
