$i = 4;
$d = 4.0;
$s = 'HackerRank ';

my $another_i = <STDIN>;
my $another_d = <STDIN>;
my $another_s = <STDIN>;

print $i + $another_i, "\n";
print sprintf("%.1f", $d + $another_d), "\n";
print $s, $another_s;
