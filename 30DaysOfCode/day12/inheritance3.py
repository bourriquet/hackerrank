class Person:
	def __init__(self, firstName, lastName, idNumber):
		self.firstName = firstName
		self.lastName = lastName
		self.idNumber = idNumber
	def printPerson(self):
		print("Name:", self.lastName + ",", self.firstName)
		print("ID:", self.idNumber)
    
class Student(Person):
    def __init__(self, firstName, lastName, idNumber, scores):
        Person.__init__(self, firstName, lastName, idNumber)
        self.testScores = scores
        
    def calculate(self):
        s = 0
        for i in range(0, len(self.testScores)):
            s += int(self.testScores[i])
        s = s / len(self.testScores)
        
        if (s >= 90 and s <= 100):
            return 'O'
        elif (s >= 80 and s < 90):
            return 'E'
        elif (s >= 70 and s < 80):
            return 'A'
        elif (s >= 55 and s < 70):
            return 'P'
        elif (s >= 40 and s < 55):
            return 'D'
        else:
            return 'T'

line = input().split()
firstName = line[0]
lastName = line[1]
idNum = line[2]
numScores = int(input()) # not needed for Python
scores = list( map(int, input().split()) )
s = Student(firstName, lastName, idNum, scores)
s.printPerson()
print("Grade:", s.calculate())
