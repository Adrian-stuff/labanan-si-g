
class Solution:
    def __init__(self, x):
        self.x = x

    def wages_of_a_labor(self):
        wages = 0 if self.x < 10 else 60
        hoursOfLabor = self.x - 10 if self.x >= 10 else self.x
        # ^^ BASE

        while hoursOfLabor >= 4:
            if hoursOfLabor >= 10:
                wages += 25
                hoursOfLabor -= 10
            if hoursOfLabor >= 6:
                wages += 15
                hoursOfLabor -= 6
            if hoursOfLabor >= 4:
                wages += 18
                hoursOfLabor -= 4
        
        print(f"Wage of a labor: Rs {wages}")
            
         



x = int(input("Enter Hours of Labor: "))
sol = Solution(x)
sol.wages_of_a_labor()