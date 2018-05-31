#!/usr/bin/perl

use strict;
use warnings;

my %names = ();

my $N = <>;
$N =~ s/\s+$//;

for (my $N_itr = 0; $N_itr < $N; $N_itr++) {
    my $firstNameEmailID = <>;
    $firstNameEmailID =~ s/\s+$//;
    my @firstNameEmailID = split /\s+/, $firstNameEmailID;

    my $firstName = $firstNameEmailID[0];
    chomp($firstName);

    my $emailID = $firstNameEmailID[1];
    chomp($emailID);
    
    if ($emailID =~ /\w+\@gmail\.com$/) {
        $names{$emailID} = $firstName;
    }
}

foreach $i (keys %names) {
    push @names, $names{$i};
}

print join "\n", sort @names;
