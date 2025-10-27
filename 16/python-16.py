import math

class Solution:
    def __init__(self, days):
        self.days = days

    def convert_days(self):
        day = self.days
        week = 0
        month = 0
        year = 0

        year = day // (7 * 4 * 12)
        day %= 7 * 4 * 12

        month = day // (7 * 4)
        day %= 7 * 4

        week = day // 7
        day %= 7

        print(f"Year: {year} \nMonth: {month} \nWeek: {week} \nDay: {day}")

numDays = int(input("Input Number of Days: "))
sol = Solution(numDays)
sol.convert_days()

