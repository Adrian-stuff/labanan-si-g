#include <stdio.h>
#include <math.h>

int main()
{
  int num, originalNum, remainder, result = 0;
  printf("Enter a number: ");
  scanf("%d", &num);
  originalNum = num;
  
  printf("\nBreakdown of calculation:\n");
  
  int first_term = 1;
  while (originalNum != 0)
  {
    remainder = originalNum % 10;
    int cube = remainder * remainder * remainder;
    if (first_term) {
      printf("%d^3", remainder);
      first_term = 0;
    } else {
      printf(" + %d^3", remainder);
    }
    result += cube;
    originalNum /= 10;
  }
  printf(" = %d\n", result);
  printf("%d %s %d\n", result, (result == num) ? "==" : "!=", num);
  
  if (result == num)
    printf("\n%d is an Armstrong number.\n", num);
  else
    printf("\n%d is not an Armstrong number.\n", num);
  return 0;
}
