#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification) {
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout << "Name: "<< lastName << ", " << firstName << "\nID: " << id << "\n"; 
		}
	
};

class Student :  public Person {
	private:
		vector<int> testScores;  
	public:
        Student(string firstName, string lastName, int id, vector<int> scores) : Person(firstName, lastName, id) {
            testScores = scores;
        }
    
        char calculate() {
            int scoreAvg = 0;
            
            for (int i = 0; i < testScores.size(); i++) {
                scoreAvg += testScores[i];
            }
            scoreAvg /= testScores.size();
            
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
};

int main() {
	string firstName;
  string lastName;
	int id;
  int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  vector<int> scores;
  for(int i = 0; i < numScores; i++){
	  int tmpScore;
	  cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
