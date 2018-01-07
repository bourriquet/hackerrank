#!/usr/bin/perl

$N = <STDIN>;
chomp $N;

if ($N % 2 == 1) {
    print "Weird";
}
else {
    if ($N >= 2 && $N <= 5) {
        print "Not Weird";
    }
    elsif ($N >= 6 && $N <= 20) {
        print "Weird";
    }
    else {
        print "Not Weird";
    }
}
