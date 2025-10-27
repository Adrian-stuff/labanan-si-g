#Write a program that checks whether it's an Armstrong or not

import math

class Solution:
    def __init__(self, x):
        self.x = x
        self.string_x = str(x)
        self.array_x = []

    def get_armstrong(self):
        sum = 0

        for char in self.string_x:
            sum += math.pow(int(char), 3)

        if sum == self.x:
            print(f"It is a Armstrong Number: {self.x}")
        else:
            print(f"It is not a Armstrong Number: {self.x}")








userInput = int(input("Input Number: "))

sol = Solution(userInput)
sol.get_armstrong()
