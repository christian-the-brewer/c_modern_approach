//Author: Christian Brewer
//Date: 2024-09-21
//Name: Tax calculator

#include <stdio.h>
int main() {

  float tax_rate, pre_tax, post_tax;

  printf("Enter tax rate as percent: ");
  scanf("%f", &tax_rate);

  printf("Enter amount: ");
  scanf("%f", &pre_tax);

  post_tax = (tax_rate / 100 + 1) * pre_tax;
  printf("Sum: $%.2f\n", post_tax);

  return 0;
}