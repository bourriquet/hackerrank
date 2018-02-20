<?php
abstract class Book {
    protected $title;
    protected  $author;
    
    function __construct($t,$a){
        $this->title=$t;
        $this->author=$a;
    }
    abstract protected function display();
}

class MyBook extends Book {
    private $price;
    
    function __construct($t, $a, $p) {
        parent::__construct($t, $a);
        $this->price = $p;
    }
    
    function display() {
        echo "Title: " . $this->title;
        echo "Author: " . $this->author;
        echo "Price: " . $this->price;
    }
}

$title=fgets(STDIN);
$author=fgets(STDIN);
$price=intval(fgets(STDIN));

$novel=new MyBook($title,$author,$price);
$novel->display();

?>
