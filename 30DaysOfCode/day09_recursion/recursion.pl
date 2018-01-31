#!/usr/bin/perl

sub factorial {
    my $num = shift;
    if ($num <= 1) {
        return 1;
    }
    
    return $num * factorial($num - 1);
}

$n = <STDIN>;
chomp $n;
$result = factorial($n);
print "$result\n";
