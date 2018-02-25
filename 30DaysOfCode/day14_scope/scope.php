<?php
class Difference{
    private $elements=array();
    public $maximumDifference;

    function __construct($elems) {
        $this->elements = $elems;
        sort($this->elements);
    }

    function ComputeDifference() {
        $this->maximumDifference = abs($this->elements[count($this->elements) - 1] - $this->elements[0]);
    }
}

$N = intval(fgets(STDIN));
$a = array_map('intval', explode(' ', fgets(STDIN)));

$d = new Difference($a);
$d->ComputeDifference();

print ($d->maximumDifference);
?>
