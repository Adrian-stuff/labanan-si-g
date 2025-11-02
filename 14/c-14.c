#include <stdio.h>
#include <math.h>

void printPythagoreanTriplets(int limit)
{
  int a, b, c;
  int count = 0;

  printf("Pythagorean Triplets (a, b, c) where a, b, c <= %d:\n", limit);
  for (a = 1; a <= limit; a++)
  {

    for (b = a; b <= limit; b++)
    {

      int c_squared = a * a + b * b;

      int c_int = (int)sqrt(c_squared);

      if ((c_int * c_int == c_squared) && (c_int <= limit))
      {

        c = c_int;
        printf("(%3d, %3d, %3d)\n", a, b, c);
        count++;
      }
    }
  }

  printf("Total Pythagorean Triplets found within %d: %d\n", limit, count);
}

int main()
{
  int max_limit = 100;

  printPythagoreanTriplets(max_limit);

  return 0;
}