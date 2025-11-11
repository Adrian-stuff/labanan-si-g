#include <stdio.h>
#include <math.h>

void printPythagoreanTriplets(int limit)
{
  int a, b, c;
  int count = 0;

  printf("Pythagorean Triplets (a, b, c) where a, b, c <= %d:\n", limit);
  printf("\n%-15s %-15s %-15s %-15s\n", "a", "b", "c(sqrt)", "c(calculated)");
  printf("------------------------------------------------------------\n");
  for (a = 1; a <= limit; a++)
  {

    for (b = a; b <= limit; b++)
    {

      int c_squared = a * a + b * b;

      int c_int = (int)sqrt(c_squared);

      if ((c_int * c_int == c_squared) && (c_int <= limit))
      {

        c = c_int;
        int a_squared = a * a;
        int b_squared = b * b;
        char a_str[20], b_str[20], c_sqrt_str[20];
        sprintf(a_str, "%d^2 = %d", a, a_squared);
        sprintf(b_str, "%d^2 = %d", b, b_squared);
        sprintf(c_sqrt_str, "sqrt(%d)", c_squared);
        printf("%-15s %-15s %-15s %-15d\n", a_str, b_str, c_sqrt_str, c);
        count++;
      }
    }
  }

  printf("\nTotal Pythagorean Triplets found within %d: %d\n", limit, count);
}

int main()
{
  int max_limit = 100;

  printPythagoreanTriplets(max_limit);

  return 0;
}