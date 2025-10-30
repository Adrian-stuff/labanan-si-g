import math

class Solution:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def get_hcf(self):
        print(f"HCF: {math.gcd(self.x, self.y)}")



x = int(input("Enter the First Number: "))
y = int(input("Enter the Second Number: "))
sol = Solution(x, y)
sol.get_hcf()