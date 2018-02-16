class Person
	def initialize(firstName, lastName, id)
		@firstName = firstName
		@lastName = lastName
		@id = id
	end
	def printPerson()
		print("Name: ",@lastName , ", " + @firstName ,"\nID: " , @id)
	end
end

class Student < Person
    def initialize(firstName, lastName, id, scores)
        super(firstName, lastName, id)
        @scores = scores
    end
    
    def calculate()
        scoreAvg = 0
        for i in (0..(@scores.length - 1))
           scoreAvg += @scores[i]
        end
        scoreAvg /= @scores.length
        
        if (scoreAvg >= 90 and scoreAvg <= 100)
            return 'O'
        elsif (scoreAvg >= 80 and scoreAvg < 90)
            return 'E'
        elsif (scoreAvg >= 70 and scoreAvg < 80)
            return 'A'
        elsif (scoreAvg >= 55 and scoreAvg < 70)
            return 'P'
        elsif (scoreAvg >= 40 and scoreAvg < 45)
            return 'D'
        end
        return 'T'
    end
end

input = gets.split()
firstName = input[0]
lastName = input[1]
id = input[2].to_i
numScores = gets.to_i
scores = gets.strip().split().map!(&:to_i)
s = Student.new(firstName, lastName, id, scores)
s.printPerson           
print("\nGrade: " + s.calculate)
