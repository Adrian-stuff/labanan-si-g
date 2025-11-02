#include <stdio.h>
#include <math.h>

int isPrime(int num)
{
  if (num <= 1)
  {
    return 0;
  }

  int limit = (int)sqrt(num);

  for (int i = 2; i <= limit; i++)
  {
    if (num % i == 0)
    {
      return 0;
    }
  }

  return 1;
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

  if (isPrime(number))
  {
    printf("%d is a prime number.\n", number);
  }
  else
  {
    printf("%d is not a prime number.\n", number);
  }

  return 0;
}