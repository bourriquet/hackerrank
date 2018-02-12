import java.util.*;

class Person {
  protected String firstName;
  protected String lastName;
  protected int idNumber;
	
  Person(String firstName, String lastName, int identification){
		this.firstName = firstName;
		this.lastName = lastName;
		this.idNumber = identification;
	}
	
	public void printPerson(){
    System.out.println("Name: " + lastName + ", " + firstName + "\nID: " + idNumber); 
  }
}

class Student extends Person{
  private int[] testScores;

  public Student(String firstName, String lastName, int id, int[] scores) {
    super(firstName, lastName, id);
    testScores = scores;
  }
    
  public char calculate() {
    int scoreAvg = 0;
        
    for (int i = 0; i < testScores.length; i++) {
      scoreAvg += testScores[i];
    }
    scoreAvg /= testScores.length;
            
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
  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
		String firstName = scan.next();
		String lastName = scan.next();
		int id = scan.nextInt();
		int numScores = scan.nextInt();
		int[] testScores = new int[numScores];
    
		for(int i = 0; i < numScores; i++){
			testScores[i] = scan.nextInt();
		}
		scan.close();
		
		Student s = new Student(firstName, lastName, id, testScores);
		s.printPerson();
		System.out.println("Grade: " + s.calculate() );
	}
}
