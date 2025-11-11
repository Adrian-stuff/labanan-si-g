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
  
  printf("\nBreakdown of calculation:\n");
  temp = num;
  int first_digit = 1;
  while (temp > 0)
  {
    int digit = temp % 10;
    if (first_digit) {
      printf("%d", digit);
      first_digit = 0;
    } else {
      printf(" + %d", digit);
    }
    sum += digit;
    temp /= 10;
  }
  printf(" = %d\n", sum);
  
  rev = reverse(sum);
  printf("%d reversed = %d\n", sum, rev);
  
  product = sum * rev;
  printf("%d * %d = %d\n", sum, rev, product);
  printf("%d %s %d\n", product, (product == num) ? "==" : "!=", num);
  
  if (product == num)
    printf("\n%d is a magic number.\n", num);
  else
    printf("\n%d is not a magic number.\n", num);
  return 0;
}
