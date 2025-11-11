#include <stdio.h>

int isPerfectNumber(int num)
{
  if (num < 1)
  {
    return 0;
  }
  
  int sum = 0;
  for (int i = 1; i < num; i++)
  {
    if (num % i == 0)
    {
      sum += i;
    }
  }
  
  return (sum == num);
}

int main()
{
  int number;

  printf("Enter a positive integer: ");
  if (scanf("%d", &number) != 1)
  {
    printf("Invalid input.\n");
    return 1;
  }

  printf("\nBreakdown of calculation:\n");
  int sum = 0;
  int first_divisor = 1;
  
  for (int i = 1; i < number; i++)
  {
    if (number % i == 0)
    {
      if (first_divisor) {
        printf("%d", i);
        first_divisor = 0;
      } else {
        printf(" + %d", i);
      }
      sum += i;
    }
  }
  printf(" = %d\n", sum);
  printf("%d %s %d\n", sum, (sum == number) ? "==" : "!=", number);
  
  if (isPerfectNumber(number))
  {
    printf("\nResult: %d is a perfect number \n", number);
  }
  else
  {
    printf("\nResult: %d is not a perfect number.\n", number);
  }

  return 0;
}