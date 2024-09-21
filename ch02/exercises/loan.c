//Author: Christian Brewer
//Date: 2024-09-21
//Name: Loan Calculator

#include <stdio.h>
int main() {
  double loan, remainder, interest, payments;

  printf("Loan Calculator\nEnter amount of loan: ");
  scanf("%lf", &loan);
  printf("Enter interest rate: ");
  scanf("%lf", &interest);
  printf("Enter monthly payment: ");
  scanf("%lf", &payments);

  remainder = loan;
  interest = (interest / 100.0f) / 12.0f;
  remainder -= payments;
  remainder *= (1 + interest);
  printf("Balance after first payment: %.2lf\n: ", remainder);

  remainder -= payments;
  remainder *= (1 + interest);
  printf("Balance after second payment: %.2lf\n: ", remainder);

  remainder -= payments;
  remainder *= (1 + interest);
  printf("Balance after third payment: %.2lf\n: ", remainder);
  return 0;
}