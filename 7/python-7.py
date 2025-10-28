class Solution:
    def __init__(self, x):
        self.value = x

    def makeSoloTable(self):
        length = self.value
        if (self.value < 0): 
            length*=(-1)
            
        for i in range(length):
            product = self.value*(i+1)
            print(f"{self.value} * {i + 1} = {product}" )




x = int(input("Enter a Value: "))
sol = Solution(x)
sol.makeSoloTable()