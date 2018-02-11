using System;
using System.Linq;

class Person {
	protected string firstName;
	protected string lastName;
	protected int id;
	
	public Person() {}
	public Person(string firstName, string lastName, int identification) {
			this.firstName = firstName;
			this.lastName = lastName;
			this.id = identification;
	}
	public void printPerson() {
		Console.WriteLine("Name: " + lastName + ", " + firstName + "\nID: " + id); 
	}
}

class Student : Person {
    private int[] testScores;  
  
    public Student(string firstName, string lastName, int id, int[] scores) : base(firstName, lastName, id) {
        testScores = scores;
    }
    
    public char Calculate() {
        int scoreAvg = 0;
        for (int i = 0; i < testScores.Length; i++) {
            scoreAvg += testScores[i];
        }
        scoreAvg /= testScores.Length;
        
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

class Solution {
	static void Main() {
		string[] inputs = Console.ReadLine().Split();
		string firstName = inputs[0];
	  	string lastName = inputs[1];
		int id = Convert.ToInt32(inputs[2]);
		int numScores = Convert.ToInt32(Console.ReadLine());
		inputs = Console.ReadLine().Split();
	  	int[] scores = new int[numScores];
		for(int i = 0; i < numScores; i++){
			scores[i]= Convert.ToInt32(inputs[i]);
		} 
	  	
		Student s = new Student(firstName, lastName, id, scores);
		s.printPerson();
		Console.WriteLine("Grade: " + s.Calculate() + "\n");
	}
}
