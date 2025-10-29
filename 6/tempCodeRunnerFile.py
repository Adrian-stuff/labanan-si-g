import math

class Solution:
    def __init__(self, n):
        self.n = n

    def questionSeriesI(self):
        s = 0

        for i in range(10):
            if i == 0:
                s += 1 
            else:
                s += 1 / i
        return s
    
    def questionSeriesII(self):
        p = 0
        for i in range(10):
            if i == 0:
                continue   
            p += i * ( i + 1)
        return p
    
    def questionSeriesIII(self):
        q = 0
        for i in range(13):
            i += 1
            if i % 2 == 0:
                continue
            q += i / i + 1
        return q
    
    def questionSeriesIV(self):
        s = 0
        numerator = 0
        denominator = 0
        for i in range(self.n):
            numerator = (3 * i ) - 1
            denominator = (4 * i) + 1 
            if numerator < 0 or denominator < 0:
                continue

            s += numerator / denominator
        return s
    
    def questionSeriesV(self):
        s = 0
        x = int(input("Enter Value of X: "))
        for i in range(11):
            if i == 0:
                continue
            s += math.pow(x, i)

        return s
    
    def questionSeriesVI(self):
        p = 0
        x = int(input("Enter Value of X: "))
        exponent = 0
        for i in range(self.n):
            if i == 0:
                continue
            exponent = (2 * i) - 1
            p += math.pow(x, exponent) / exponent
        return p
            
    def questionSeriesVII(self):
        s = 0
        num = [i + 1 for i in range(13)]
        for i in range(13):
            s += num[-1 - 1] * num[i]
        return s
    
    def questionSeriesVIII(self):
        s = 0
        for i in range(6):
            if i == 0:
                continue
            s += 1 / math.pow(i, i)
        return s
    
    def questionSeriesIX(self):
        s = 0
        for i in range(self.n + 1):
            if i == 0:
                continue
            print(f"1 / {i}")
            s += 1 / math.factorial(i)
        return s
    
    def questionSeriesX(self):
        s = 0
        for i in range(self.n + 1):
            if i == 0:
                continue
            if i % 2 == 0:
                continue
            s += 1 / math.factorial(i)
        return s

    






        
    def printAnswers(self):
        print(" -- ANSWERS -- ")
        print(f"Question 1: S = {self.questionSeriesI()}")
        print(f"Question 2: P = {self.questionSeriesII()}")
        print(f"Question 3: Q = {self.questionSeriesIII()}")
        print(f"Question 4: S = {self.questionSeriesIV()}")
        print(f"Question 5: S = {self.questionSeriesV()}")
        print(f"Question 6: P = {self.questionSeriesVI()}")
        print(f"Question 7: S = {self.questionSeriesVII()}")
        print(f"Question 8: S = {self.questionSeriesVIII()}")
        print(f"Question 9: S = {self.questionSeriesIX()}")
        print(f"Question 10: S = {self.questionSeriesX()}")


n = int(input("Input N'th Terms (will be used for questions that has no specific N'th terms): "))
sol = Solution(n)
sol.printAnswers()
