# A cricket kit supplier in Jalandhar sells bat, wickets, and balls.
# WAP to generate sales bill.
# Input FORM THE CONSOLE, the DATE OF PURCHASE, NAME OF THE BUYER, PRICE OF EACH ITEM
# & QUANTITY OF EACH ITEM. Calculate the total sale amount and add 17.5% sales tax
# if the TOTAL SALE amount > 300 000 and ADD 12.5%.
# if the TOTAL SALE amount is > 150 000 and 7% otherwise. Display the total sales amount,
# The sale tax and the grand total.


import math

class Solution:
    def __init__(self, buyerName, dateOfPurchase, batPrice, wicketsPrice, ballsPrice):
        self.buyerName = buyerName
        self.dateOfPurchase = dateOfPurchase
        self.batPrice = batPrice
        self.wicketsPrice = wicketsPrice
        self.ballsPrice = ballsPrice

    def run_program(self):
        batQuantity = int(input("How many bats will you buy: "))
        wicketsQuantity = int(input("How many wickets will you buy: "))
        ballsQuantity = int(input("How many balls will you buy: "))

        totalSales = (self.batPrice * batQuantity) + (self.wicketsPrice * wicketsQuantity) + (self.ballsPrice * ballsQuantity)
        tax_rate = 0

        if totalSales > 300000:
            tax_rate = 0.175
        elif totalSales > 150000 and totalSales <= 300000:
            tax_rate = 0.125
        else:
            tax_rate = 0.07

        salesTax = totalSales * tax_rate
        grandTotal = totalSales + salesTax

        print("---------- BILL DETAILS ----------")
        print(f"Name: {self.buyerName} -- Date: {self.dateOfPurchase}")
        print(f"Total Sales Amount: ${totalSales:.2f}")
        print(f"Sales Tax: ${salesTax:.2f}")
        print(f"Grand Total: ${grandTotal:.2f}")





bat = 5000
wickets = 1500
balls = 250
buyerName = input("Enter buyer name: ")
dateOfPurchase = input("Enter date of purchase: ")

sol = Solution(buyerName, dateOfPurchase, bat, wickets, balls)
sol.run_program()


