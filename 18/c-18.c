#include <stdio.h>

int main()
{
  char date[20], name[50];
  float price_bat, price_wicket, price_ball;
  int qty_bat, qty_wicket, qty_ball;
  float total, tax, grand_total, tax_rate;

  printf("Enter date of purchase (DD/MM/YYYY): ");
  scanf("%s", date);
  printf("Enter name of buyer: ");
  scanf("%s", name);
  printf("Enter price of bat: ");
  scanf("%f", &price_bat);
  printf("Enter quantity of bats: ");
  scanf("%d", &qty_bat);
  printf("Enter price of wicket: ");
  scanf("%f", &price_wicket);
  printf("Enter quantity of wickets: ");
  scanf("%d", &qty_wicket);
  printf("Enter price of ball: ");
  scanf("%f", &price_ball);
  printf("Enter quantity of balls: ");
  scanf("%d", &qty_ball);

  printf("\nBreakdown of calculation:\n");
  float bat_total = price_bat * qty_bat;
  float wicket_total = price_wicket * qty_wicket;
  float ball_total = price_ball * qty_ball;
  
  printf("%.2f * %d = %.2f\n", price_bat, qty_bat, bat_total);
  printf("%.2f * %d = %.2f\n", price_wicket, qty_wicket, wicket_total);
  printf("%.2f * %d = %.2f\n", price_ball, qty_ball, ball_total);
  
  total = bat_total + wicket_total + ball_total;
  printf("%.2f + %.2f + %.2f = %.2f\n", bat_total, wicket_total, ball_total, total);
  
  if (total > 300000)
    tax_rate = 0.175f;
  else if (total > 150000)
    tax_rate = 0.125f;
  else
    tax_rate = 0.07f;
  
  tax = total * tax_rate;
  printf("%.2f * %.3f = %.2f\n", total, tax_rate, tax);
  
  grand_total = total + tax;
  printf("%.2f + %.2f = %.2f\n", total, tax, grand_total);

  printf("\n--- Invoice ---\n");
  printf("Date: %s\n", date);
  printf("Buyer: %s\n", name);
  printf("Total Sales Amount: %.2f\n", total);
  printf("Sales Tax (%.1f%%): %.2f\n", tax_rate * 100, tax);
  printf("Grand Total: %.2f\n", grand_total);
  return 0;
}
