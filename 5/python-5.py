class Solution:
    def __init__(self):
        self.PI = 3.14

    def get_choice(self):
        try:
            choice = 0
            print("--- Volume Calculator ---")
            print("1.) Volume of a Cube")
            print("2.) Volume of a Cuboid")
            print("3.) Volume of a Cylinder")
            print("4.) Volume of a Sphere")
            print("5.) Exit")
            choice = int(input("Enter a Choice (1-5): "))

            self.choice_calculate_volume(choice)
        except Exception as e:
            print("Please Input VALID INPUTS ONLY!")
            self.get_choice

    def choice_calculate_volume(self, choice):
        validChoices = [1, 2, 3, 4, 5]

        if choice not in validChoices:
            print("Error: Please Input Valid Choices only")
            self.get_choice()

        if choice == 1:
            self.calculateCubeVolume()
        elif choice == 2:
            self.calculateCuboidVolume()
        elif choice == 3:
            self.calculateCylinderVolume()
        elif choice == 4:
            self.calculateSphereVolume()
        elif choice == 5:
            print("Exited the Program.")
            return
        else:
            print("Error - Please enter a valid input.")
            self.choice_calculate_volume()
            

    def calculateCubeVolume(self):
        side = float(input("Enter Side Length: "))
        if side < 0:
            print("Error")
            self.get_choice()

        volume = float(side * 3)
        print(f"Volume: {volume}")

    def calculateCuboidVolume(self):
        length = float(input("Enter Length:"))
        if length < 0:
            print("Error")
            self.get_choice()

        width = float(input("Enter Width: "))
        if width < 0:
            print("Error")
            self.get_choice()

        height = float(input("Enter Height: "))
        if height < 0:
            print("Error")
            self.get_choice()

        volume = length * width * height
        print(f"Volume: {volume}")

    def calculateCylinderVolume(self):
        radius = float(input("Enter Radius: "))
        if radius < 0:
            print("Error")
            self.get_choice()

        height = float(input("Enter Height: "))
        if height < 0:
            print("Error")
            self.get_choice()

        volume = self.PI * radius * radius * height
        print(f"Volume {volume}")

    def calculateSphereVolume(self):
        radius = float(input("Enter Radius: "))
        if radius < 0:
            print("Error")
            self.get_choice()

        volume = (4 / 3) * self.PI * radius * radius * radius
        print(f"Volume: {volume}")

        
sol = Solution()
sol.get_choice()