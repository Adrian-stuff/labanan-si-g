class Solution:
    def __init__(self, x):
        self.x = x

    def create_table(self):
        table = ""
        for i in range(10):
            for j in range(self.x):
                if i == 0:
                    table += f"{j:^4}|"
                    # table += "    "
                elif j == 0:
                    table += f"{i:^4}|"
                else:
                    table+= f"{i * j :^4}|"

            table += "\n"

        print(table)


x = int(input("Enter a number to create a table:"))
sol = Solution(x)
sol.create_table()