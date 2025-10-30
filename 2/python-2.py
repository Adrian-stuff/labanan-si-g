
class Solution:
    def __init__(self, x):
        self.x = x

    def calculate_commission_earned(self):
        totalSales = self.x
        commissionRate = 0
        if totalSales <= 1000:
            commissionRate = 0.03
        elif totalSales >= 1001 and totalSales <= 4000:
            commissionRate = 0.08
        elif totalSales >= 4001 and totalSales <= 6000:
            commissionRate = 0.12
        else:
            commissionRate = 0.15

        print(f"Commission earned: {totalSales * commissionRate} ")




x = float(input("Input Sales: "))
sol = Solution(x)
sol.calculate_commission_earned()