#include <stdio.h>

int reverse(int n)
{
  int rev = 0;
  while (n > 0)
  {
    rev = rev * 10 + n % 10;
    n /= 10;
  }
  return rev;
}

int main()
{
  int num, sum = 0, temp, rev, product;
  printf("Enter a number: ");
  scanf("%d", &num);
  temp = num;
  while (temp > 0)
  {
    sum += temp % 10;
    temp /= 10;
  }
  rev = reverse(sum);
  product = sum * rev;
  if (product == num)
    printf("%d is a magic number.\n", num);
  else
    printf("%d is not a magic number.\n", num);
  return 0;
}
