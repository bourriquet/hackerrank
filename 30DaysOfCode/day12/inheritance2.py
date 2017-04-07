class Person:
	def __init__(self, firstName, lastName, idNumber):
		self.firstName = firstName
		self.lastName = lastName
		self.idNumber = idNumber
	def printPerson(self):
		print "Name:", self.lastName + ",", self.firstName
		print "ID:", self.idNumber
    
class Student(Person):
    def __init__(self, firstName, lastName, idNumber, testScores):
        Person.__init__(self, firstName, lastName, idNumber)
        self.testScores = testScores
    
    def calculate(self):
        scoreAvg = 0
        for i in range(0, len(self.testScores)):
            scoreAvg += self.testScores[i]
        scoreAvg /= len(self.testScores)
        
        if (scoreAvg >= 90 and scoreAvg <= 100):
            return 'O'
        elif (scoreAvg >= 80 and scoreAvg < 90):
            return 'E'
        elif (scoreAvg >= 70 and scoreAvg < 80):
            return 'A'
        elif (scoreAvg >= 55 and scoreAvg < 70):
            return 'P'
        elif (scoreAvg >= 40 and scoreAvg < 55):
            return 'D'
        return 'T'

line = raw_input().split()
firstName = line[0]
lastName = line[1]
idNum = line[2]
numScores = int(raw_input())
scores = map(int, raw_input().split())
s = Student(firstName, lastName, idNum, scores)
s.printPerson()
print "Grade:", s.calculate()
