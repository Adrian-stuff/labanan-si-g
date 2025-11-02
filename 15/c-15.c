#include <stdio.h>
#include <math.h>

int isAutomorphic(int num)
{
  if (num < 0)
  {
    return 0;
  }

  long long square = (long long)num * num;

  int temp = num;
  int digit_count = 0;

  if (num == 0)
  {
    digit_count = 1;
  }
  else
  {
    while (temp > 0)
    {
      temp /= 10;
      digit_count++;
    }
  }

  int divisor = (int)pow(10, digit_count);

  if (square % divisor == num)
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

  printf("Enter a positive integer: ");
  if (scanf("%d", &number) != 1 || number < 0)
  {
    printf("Invalid input or non-positive number.\n");
    return 1;
  }

  if (isAutomorphic(number))
  {
    printf("\nResult: %d is an automorphic number.\n", number);
  }
  else
  {
    printf("\nResult: %d is not an automorphic number.\n", number);
  }

  return 0;
}