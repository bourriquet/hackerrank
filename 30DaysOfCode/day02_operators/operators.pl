my $mealCost = <STDIN>;
my $tip = <STDIN>;
my $tax = <STDIN>;

my $total = int($mealCost + (0.01 * $tip * $mealCost) + (0.01 * $tax * $mealCost) + 0.5);

print "The total meal cost is ", $total, " dollars.";
