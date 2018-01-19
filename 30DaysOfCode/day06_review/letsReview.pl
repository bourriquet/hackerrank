$T = <STDIN>;
chomp $T;

for ($i = 0; $i < $T; $i++) {
    $S = <STDIN>;
    chomp $S;
    
    for ($j = 0; $j < length($S); $j += 2) {
        print substr($S, $j, 1);
    }
    print " ";
    
    for ($j = 1; $j < length($S); $j += 2) {
        print substr($S, $j, 1);
    }
    print "\n";
}
