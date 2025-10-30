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
    
    def questionSeriesXI(self):
        s = 0
        kth_term = 0
        for i in range(21):
            if i == 0:
                continue

            kth_term = (i * (i + 1)) / 2
            s += kth_term

        return s
    
    def questionSeriesXII(self):
        s = 0
        x = int(input("Input a Value of X: "))
        for i in range(11):
            if i == 0:
                continue      
            if i == 1:
                s += x
                continue
        return s
    
    def questionSeriesXIII(self):
        p = 0
        x = int(input("Input a Value of X: "))
        for i in range(10):
            if i == 1 or i == 0:
                continue
            p += math.pow(x, i) / math.factorial(i + 1)
        return p

    def questionSeriesXIV(self):
        s = 0
        for i in range(11):
            if i == 0:
                continue
            if i % 2 != 0:
                s += i
            else:
                s -= i
        return s
    
    def questionSeriesXV(self):
        s = 0
        for i in range(11):
            if i == 0:
                continue
            if i % 2 != 0:
                if i == 1:
                    s += i
                    continue
                s += math.pow(i, 2)
            else:
                s -= math.pow(i, 2)
        return s
    
    def questionSeriesXVI(self): # still has something to fix
        s = 0
        numerator = 0
        denominator = 0
        for i in range(15):
            numerator = i + 1
            denominator = i + 3
            s += numerator / denominator
            # print(f"{numerator} / {i + 3}")
        return s
    
    def questionSeriesXVII(self):
        s = 0
        x = int(input("Enter a Value of X"))
        for i in range(self.n):
            if i == 1:
                s += i
            elif i == 0:
                continue
            elif i % 2 != 0:
                continue
            else:
                s += math.pow(x, i) / math.factorial(i)
        return s
    
    def questionSeriesXVIII(self):
        s = 0
        kth_term = 0
        for i in range(21):
            if i == 0:
                continue

            kth_term = (i * (i + 1)) / 2
            s += kth_term

        return s
    
    def questionSeriesXIX(self):
        s = 0
        x = int(input("Enter Value of X: "))
        for i in range(self.n + 1):
            if i == 0:
                s += 1
                continue
            s += math.pow(x, i) / i
        return s

    def questionSeriesXX(self):
        s = 0
        s += 1 * 3 / 2 * 4 * 5
        for i in range(self.n):
            s += ( i + 2 ) * ( i + 4 )
        s = s * (self.n + 2) / (self.n + 1) * (self.n + 3) * (self.n + 4) 
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
        print(f"Question 11: S = {self.questionSeriesXI()}")
        print(f"Question 12: S = {self.questionSeriesXII()}")
        print(f"Question 13: P = {self.questionSeriesXIII()}")
        print(f"Question 14: S = {self.questionSeriesXIV()}")
        print(f"Question 15: S = {self.questionSeriesXV()}")
        print(f"Question 16: S = {self.questionSeriesXVI()}")
        print(f"Question 17: S = {self.questionSeriesXVII()}")
        print(f"Question 18: S = {self.questionSeriesXVIII()}")
        print(f"Question 19: S = {self.questionSeriesXIX()}")
        print(f"Question 20: S = {self.questionSeriesXX()}")


n = int(input("Input N'th Terms (will be used for questions that has no specific N'th terms): "))
sol = Solution(n)
sol.printAnswers()
