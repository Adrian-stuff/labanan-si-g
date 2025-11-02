
class Solution:
    def __init__(self, x):
        self.x = x


    def corresponding_type(self):
        identical = 0
        for i in range(3):
            if i < 2:
                if self.x[i] == self.x[i + 1]:
                    identical += 1
            else:
                if self.x[i] == self.x[-1]:
                    identical += 1
            
        
            
        print(identical)
        if identical == 1:
            print("The Triangle is Isosceles")
        elif identical == 3:
            print("The Triangle is Equilateral")
        else:
            print("The Triangle is Scalene")
                

             

try:
    x = [float(input("Enter a Side a Triangle: ")) for i in range(3)]
except Exception:
    print(f"Please Input a Valid Number")
x.sort()
sol = Solution(x)
sol.corresponding_type()
