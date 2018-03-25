<?php

class Solution {
    private $s, $q;
    
    function __construct__() {
        $this->s = array();
        $this->q = array();
    }
    
    function pushCharacter($c) {
        $this->s[] = $c;
    }
    
    function enqueueCharacter($c) {
        $this->q[] = $c;
    }
    
    function popCharacter() {
        return array_pop($this->s);
    }
    
    function dequeueCharacter() {
        return array_shift($this->q);
    }
}

$s = fgets(STDIN);
$obj = new Solution();

$len = strlen($s);
$isPalindrome = true;

for ($i = 0; $i < $len; $i++) {
    $obj->pushCharacter($s{$i});
    $obj->enqueueCharacter($s{$i});
}

for ($i = 0; $i < $len / 2; $i++) {
    if($obj->popCharacter() != $obj->dequeueCharacter()){
        $isPalindrome = false;
    	
        break;
    }
}

if ($isPalindrome)
    echo "The word, ".$s.", is a palindrome.";
else
    echo "The word, ".$s.", is not a palindrome.";
    
?>
