# Calculate Generic Root Number
# eg. Input: 456791
# -> 4+5+6+7+9+1 = 32
# -> 3 + 2 = 5
# 5 is the generic root of the given number


class Solution:
    def __init__(self, x):
        self.x = x

    def get_generic_root(self):
        digits = str(self.x)
        sum_of_input = 0
        n = 0

        for digit in digits:
            sum_of_input += int(digit)

        for digit in str(sum_of_input):
            n += int(digit)


        print(f"The Generic Root of the given number `{self.x}` is {n}")




x = input("Input a number: ")
sol = Solution(x)
sol.get_generic_root()








