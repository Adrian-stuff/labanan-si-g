import math

class Solution:
    def __init__(self, x):
        self.x = x

    def print_factorial(self):
        print(f"Factorial Equivalent: {math.factorial(self.x)}")




x = int(input("Enter a Number: "))
sol = Solution(x)
sol.print_factorial()