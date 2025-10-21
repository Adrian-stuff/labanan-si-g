#include <stdio.h>

int main()
{
  int sale = 0;
  printf("Enter Sales: ");
  scanf("%d", &sale);
  float commission_rate[] = {0.03, 0.08, 0.12};
  int sales_a[] = {1, 1001, 3001};
  int sales_b[] = {1000, 4000, 6000};

  for (int i = 0; i < 3; i++)
  {
    if (sale >= sales_a[i] && sale <= sales_b[i])
    {
      printf("total: %f", commission_rate[i] * sale);
    }
    else if (sale >= 6001)
      printf("total: %f", 0.15 * sale);
  }
  return 0;
}