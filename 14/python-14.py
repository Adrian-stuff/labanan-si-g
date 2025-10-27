
# 14.) WAP to print the Pythagoras triplets within 100
# A Pythagorean triplets consists of three positive integers a, b, and, c such that a^2 + b^2 = c^2
import math
class Solution:
    def __init__(self, a, b):
        self.a = a
        self.b = b

    def solve(self):
        if self.a > 100 or self.b > 100:
            print("Not within 100")
            return

        c = (self.a * self.a) + (self.b * self.b)
        return math.sqrt(c)


a = int(input(" Integer A: "))
b = int(input(" Integer B: "))
sol = Solution(a, b)

print(f"Pythagoras Triplet: {sol.solve()}")
