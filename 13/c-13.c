#include <stdio.h>

int findHCF(int a, int b)
{

	if (b == 0)
	{
		return a;
	}

	return findHCF(b, a % b);
}

int main()
{
	int num1, num2, result;

	printf("Enter the first positive integer: ");
	if (scanf("%d", &num1) != 1 || num1 <= 0)
	{
		printf("Invalid input. Please enter a positive integer.\n");
		return 1;
	}

	printf("Enter the second positive integer: ");
	if (scanf("%d", &num2) != 1 || num2 <= 0)
	{
		printf("Invalid input. Please enter a positive integer.\n");
		return 1;
	}

	result = findHCF(num1, num2);

	printf("\nThe HCF of %d and %d is: %d\n", num1, num2, result);

	return 0;
}