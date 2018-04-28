use Math::Complex;

$N = <STDIN>;
chomp $N;

for ($i = 0; $i < $N; $i++) {
    $num = <STDIN>;
    chomp $num;
    $flag = 1;
    
    if ($num < 2) {
        print "Not prime\n";
    } elsif ($num <= 3) {
        print "Prime\n";
    } elsif ($num % 2 == 0 || $num % 3 == 0) {
        print "Not prime\n";
    } else {
        for ($j = 5; $j <= sqrt($num); $j += 2) {
            if ($num % $j == 0) {
                print "Not prime\n";
                $flag = 0;
                last;
            }
        }
        
        if ($flag == 1) {
            print "Prime\n";
        }
    }
}
