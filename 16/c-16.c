#include <stdio.h>

int main()
{
  int total_days;
  int years, weeks, remaining_days;

  const int DAYS_IN_YEAR = 365;
  const int DAYS_IN_WEEK = 7;

  printf("Enter the total number of days: ");
  if (scanf("%d", &total_days) != 1 || total_days < 0)
  {
    printf("Invalid input. Please enter a non-negative integer for days.\n");
    return 1;
  }

  years = total_days / DAYS_IN_YEAR;

  int days_after_years = total_days % DAYS_IN_YEAR;

  weeks = days_after_years / DAYS_IN_WEEK;

  remaining_days = days_after_years % DAYS_IN_WEEK;

  printf("Total Days Input: %d\n", total_days);
  printf("Equivalent Time: %d Years, %d Weeks, and %d Days\n",
         years, weeks, remaining_days);

  return 0;
}