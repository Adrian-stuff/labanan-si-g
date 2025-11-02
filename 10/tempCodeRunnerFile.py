import math

class Solution:
    def __init__(self, x):
        self.x = x

    def is_prime(self):
        if self.x <= 1:
            print("NOT PRIME")
            return
        elif self.x > 2 and self.x % 2 == 0:
            print("NOT PRIME")
            return
        elif self.x == 2:
            print("IS PRIME")
            return

        for i in range(round(math.sqrt(self.x))):
            if i < 2:
                continue

            if self.x % i == 0:
                print("NOT PRIME")
                return
            
        print("IS PRIME")
        return


x = int(input("Enter a Number: "))
sol = Solution(x)
sol.is_prime()