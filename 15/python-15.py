# 15.) Automorphic checker - if the square last number ends in the same digit as number it self.

class Solution:
    def __init__(self, n):
        self.n = n

    def solve(self): # Make it as an array
        squaredNumber = self.n**2
        strBaseNum = str(self.n)
        strSquaredNumber = str(squaredNumber)
        baseNum = []
        squareNum = []

        for i in range(0, len(strBaseNum)): # Gets the digit for the base number
            baseNum.append(strBaseNum[i])

        print(baseNum)

        for i in range (0, len(strSquaredNumber)): # Gets the digit for the squared number
            squareNum.append(strSquaredNumber[i])

        print(squareNum)

        counter = 0

        for i in range(0, len(baseNum)):
            currentBaseNumber = baseNum[- (i + 1) ]
            currentSquaredNumber = squareNum[- (i +1)]
            if currentSquaredNumber == currentBaseNumber:
                counter += 1

        if counter == len(baseNum):
            return "It is Automorphic"
        else:
            return "Not Automorphic"


n = int(input("Input the Number to get Automorphic Check: "))
sol = Solution(n)
print(sol.solve())
