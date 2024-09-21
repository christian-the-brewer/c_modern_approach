//Author: Christian Brewer
//Date: 2024-09-21
//Name: Minimal Bills
#include <stdio.h>
int main() {
  int amount, dollar_amount, twenties, tens, fives, ones;

  printf("Minimum Bill Calculator.\nPlease enter the amount: ");
  scanf("%d", &amount);

  dollar_amount = amount;
  twenties = dollar_amount / 20;
  dollar_amount -= twenties * 20;

  tens = dollar_amount / 10;
  dollar_amount -= tens * 10;

  fives = dollar_amount / 5;
  dollar_amount -= fives * 5;

  ones = dollar_amount;

  printf("$20 bills: %d\n", twenties);
  printf("$10 bills: %d\n", tens);
  printf(" $5 bills: %d\n", fives);
  printf(" $1 bills: %d\n", ones);
}