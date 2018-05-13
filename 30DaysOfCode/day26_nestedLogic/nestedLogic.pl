my $a = <>;
chomp $a;

my $b = <>;
chomp $b;

my ($d1, $m1, $y1) = split / /, $a;
my ($d2, $m2, $y2) = split / /, $b;

if ($y1 > $y2) {
    print "10000";
} elsif ($y1 == $y2) {
    if ($m1 > $m2) {
        my $fine = 500 * ($m1 - $m2);
        print "$fine";
    } elsif ($m1 == $m2) {
        if ($d1 > $d2) {
            my $fine = 15 * ($d1 - $d2);
            print "$fine";
        } else {
            print "0";
        }
    } else {
        print "0";
    }
} else {
    print "0";
}
