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
  int limit;

  printf("Enter a positive integer to find all primes up to it: ");
  if (scanf("%d", &limit) != 1 || limit < 0)
  {
    printf("Invalid input. Please enter a non-negative integer.\n");
    return 1;
  }

  printf("Prime numbers up to %d are:\n", limit);

  for (int i = 2; i <= limit; i++)
  {
    if (isPrime(i))
    {
      printf("%d ", i);
    }
  }

  printf("\n");
  return 0;
}