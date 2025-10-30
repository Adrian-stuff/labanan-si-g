import math

class Solution:
    def __init__(self, x):
        self.x = x

    def is_prime(self, num):
        if num <= 1:
            return False
        elif num == 2:
            return True
        elif num % 2 == 0:
            return False
        

        for i in range(3, round(math.sqrt(num))):
            if num % i == 0:
                return False
            
        return True

    def print_all_prime(self):
        array_of_primes = ""
        for i in range(self.x + 1):
            print(i)
            if self.is_prime(i):
                array_of_primes += f"|{i}"

        print(array_of_primes)

x = int(input("Enter a Number: "))
sol = Solution(x)
sol.print_all_prime()