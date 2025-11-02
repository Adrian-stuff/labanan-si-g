#include <stdio.h>
#include <math.h>

int isPerfectSquare(int num)
{
  if (num < 0)
  {
    return 0;
  }
  double root_double = sqrt(num);

  int root_integer = (int)root_double;

  if (root_integer * root_integer == num)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main()
{
  int number;

  printf("Enter a non-negative integer: ");
  if (scanf("%d", &number) != 1)
  {
    printf("Invalid input.\n");
    return 1;
  }

  if (isPerfectSquare(number))
  {
    printf("\nResult: %d is a perfect square \n", number);
  }
  else
  {
    printf("\nResult: %d is not a perfect square.\n", number);
  }

  return 0;
}