'use strict';

var _input = '';
var _index = 0;
process.stdin.on('data', (data) => { _input += data; });
process.stdin.on('end', () => {
    _input = _input.split(new RegExp('[ \n]+'));
    main();    
});
function read() { return _input[_index++]; }

class Person {
    constructor(firstName, lastName, identification) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.idNumber = identification;
    }
    
    printPerson() {
        console.log(
            "Name: " + this.lastName + ", " + this.firstName 
            + "\nID: " + this.idNumber
        )
    }
}

class Student extends Person {
    constructor(firstName, lastName, id, scores) {
        super(firstName, lastName, id);
        this.testScores = scores;
    }
    
    calculate() {
        let scoreAvg = 0;
        
        for (let i = 0; i < this.testScores.length; i++) {
            scoreAvg += this.testScores[i];
        }
        scoreAvg /= this.testScores.length;

        if (scoreAvg >= 90 && scoreAvg <= 100)
            return 'O';
        else if (scoreAvg >= 80 && scoreAvg < 90)
            return 'E';
        else if (scoreAvg >= 70 && scoreAvg < 80)
            return 'A';
        else if (scoreAvg >= 55 && scoreAvg < 70)
            return 'P';                
        else if (scoreAvg >= 40 && scoreAvg < 55)
            return 'D';                
        return 'T';
    }
}

function main() {
    let firstName = read()
    let lastName = read()
    let id = +read()
    let numScores = +read()
    let testScores = new Array(numScores)
    
    for (var i = 0; i < numScores; i++) {
        testScores[i] = +read()  
    }

    let s = new Student(firstName, lastName, id, testScores)
    s.printPerson()
    s.calculate()
    console.log('Grade: ' + s.calculate())
}
