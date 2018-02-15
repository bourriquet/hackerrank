<?php

class Person {
    protected $firstName, $lastName, $id;
    
    public function __construct($first_name, $last_name, $identification) {
        $this->firstName = $first_name;
        $this->lastName = $last_name;
        $this->id = $identification;
    }
    
    function printPerson() {
        print("Name: {$this->lastName}, {$this->firstName}\n");
        print("ID: {$this->id}\n");
    }
}

class Student extends Person {
    private $testScores;
  
    public function __construct($first_name, $last_name, $id, $scores) {
        parent::__construct($first_name, $last_name, $id);
        $this->testScores = $scores;
    }

    function calculate() {
        $scoreAvg = 0;
        for ($i = 0; $i < count($this->testScores); $i++) {
            $scoreAvg += $this->testScores[$i];
        }
        $scoreAvg /= count($this->testScores);
        
        if ($scoreAvg >= 90 && $scoreAvg <= 100)
            return 'O';
        else if ($scoreAvg >= 80 && $scoreAvg < 90)
            return 'E';
        else if ($scoreAvg >= 70 && $scoreAvg < 80)
            return 'A';
        else if ($scoreAvg >= 55 && $scoreAvg < 70)
            return 'P';                
        else if ($scoreAvg >= 40 && $scoreAvg < 55)
            return 'D';                
        return 'T';
    }
}

$file = fopen("php://stdin", "r");

$name_id = explode(' ', fgets($file));

$first_name = $name_id[0];
$last_name = $name_id[1];
$id = (int)$name_id[2];

fgets($file);

$scores = array_map(intval, explode(' ', fgets($file)));

$student = new Student($first_name, $last_name, $id, $scores);

$student->printPerson();

print("Grade: {$student->calculate()}");
