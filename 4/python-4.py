class Solution:
    def __init__(self):
        self.PI = 3.14

    def get_choice(self):
        try:
            choice = 0
            print("--- Area Calculator ---")
            print("1.) Circle")
            print("2.) Triangle")
            print("3.) Square")
            print("4.) Rectangle")
            print("5.) Exit")
            choice = int(input("Enter a Choice (1-5): "))

            self.choice_calculate_area(choice)
        except Exception as e:
            print(f"Choice{choice}")
            print("Please Input VALID INPUTS ONLY!")
            self.get_choice()

    def choice_calculate_area(self, choice):
        validChoices = [1, 2, 3, 4, 5]

        if choice not in validChoices:
            print(f"Choice{choice}")
            print("Error: Please Input Valid Choices only")
            self.get_choice()

        if choice == 1:
            self.calculateCircleArea()
        elif choice == 2:
            self.calculateTriangleArea()
        elif choice == 3:
            self.calculateSquareArea()
        elif choice == 4:
            self.calculateRectangleArea()
        elif choice == 5:
            print("Exited the Program.")
            return
        else:
            print("Error - Please enter a valid input.")
            self.choice_calculate_area()

    def calculateCircleArea(self):
        radius = 0
        
        radius = float(input("Enter Radius: "))
        if radius < 0:
            print("Error")
            self.get_choice()

        area = self.PI * radius * radius
        print(f"Area: {area}")

    def calculateTriangleArea(self):
        base = 0
        height = 0
        
        base = float(input("Enter Base Length: "))
        if base < 0:
            print("Error")
            self.get_choice()

        height = float(input("Enter Height: "))
        if height < 0:
            print("Error")
            self.get_choice()

        area = 0.5 * base * height
        print(f"Area: {area}")

    def calculateSquareArea(self):
        side = 0
        
        side = float(input("Enter Side Length: "))
        if side < 0:
            print("Error")
            self.get_choice()

        area = side * side
        print(f"Area: {area}")

    def calculateRectangleArea(self):
        length = 0
        width = 0
        
        length = float(input("Enter Length: "))
        if length < 0:
            print("Error")
            self.get_choice()

        width = float(input("Enter Width: "))
        if width < 0:
            print("Error")
            self.get_choice()

        area = length * width
        print(f"Area: {area}")


sol = Solution()
sol.get_choice()