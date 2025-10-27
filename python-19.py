# Check whether the number is a magic number or not
# MAGIC NUMBER : 1729
# FIND THE SUM OF DIGITS OF THE GIVEN NUMBER (1 + 7 + 2 + 9 => 19)
# REVERSE IT -- 19 == 91

import math

class Solution:
    def __init__(self, x):
        self.x = x
        self.string_x = str(x)

    def check_if_magic_number(self):
        sum = 0
        is_magic_number = False
        string_reversed_sum = ""

        for char in self.string_x:
            sum += int(char)

        string_sum = str(sum)
        for i, char in enumerate(range(len(string_sum))):
            string_reversed_sum += string_sum[i - 1]

        reversed_sum = int(string_reversed_sum)

        if sum * reversed_sum == int(self.x):
            is_magic_number = True


        if is_magic_number:
            print(f"Number {self.x} is a MAGIC NUMBER")
        else:
            print(f"Number {self.x} is not a MAGIC NUMBER")






x = input("Enter a Number: ")
sol = Solution(x)
sol.check_if_magic_number()

