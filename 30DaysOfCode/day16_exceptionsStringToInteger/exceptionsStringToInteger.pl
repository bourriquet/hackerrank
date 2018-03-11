#!/usr/bin/perl

$S = <STDIN>;
chomp $S;

print int $S || "Bad String";
