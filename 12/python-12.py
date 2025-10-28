class Solution:
    def __init__(self, x):
        self.x = x

    def is_perfect_square(self):
        i = 0
        while i * i <= self.x:
            if i * i == self.x:
                print(f"Number: {self.x} -- Is a Perfect Square.")
                return

            i += 1    
        
        print(f"Number: {self.x} -- Is not a Perfect Square.")
        return

x = int(input("Input a Number: "))
sol = Solution(x)
sol.is_perfect_square()