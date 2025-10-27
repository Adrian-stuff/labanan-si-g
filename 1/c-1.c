#include <stdio.h>

int main()
{
  int sides[3];
  int identical = 0;

  for (int i = 0; i < 3; i++)
  {
    printf("Enter side %d: ", i + 1);
    scanf("%d", &sides[i]);
    for (int j = 0; j < i; j++)
    {
      if (sides[i] == sides[j])
        identical += 1;
    }
  }

  if (identical == 3)
  {
    printf("the triangle is equilateral");
  }
  else if (identical == 1)
  {
    printf("the triangle is isosceles");
  }
  else
  {
    printf("the triangle is scalene");
  }

  return 0;
}
