#!/usr/bin/perl

$arr_i = 0;
@arr = ();

while($arr_i < 6){
   my $arr_temp = <STDIN>;
   my @arr_t = split / /,$arr_temp;
   chomp @arr_t;
   push @arr,\@arr_t;
   $arr_i++;
}

$max = 0;

for ($i = 0; $i < 4; $i++) {
    for ($j = 0; $j < 4; $j++) {
        $sum = 0;
        
        $sum += $arr[$i][$j] + $arr[$i][$j+1] + $arr[$i][$j+2];
        $sum += $arr[$i+1][$j+1];
        $sum += $arr[$i+2][$j] + $arr[$i+2][$j+1] + $arr[$i+2][$j+2];
        
        if ($sum > $max) {
            $max = $sum;
        }
    }
}

print $max;
