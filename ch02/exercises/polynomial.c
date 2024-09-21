//Author: Christian Brewer
//Date: 2024-09-21
//Name: Polynomial
#include <stdio.h>

int powerize(int x, int y) {
  int sum = 1;
  for (int i = 1; i <= y; i++) {
    sum *= x;
  }
  return sum;
}

int main(void) {
  int x, result;

  printf("Enter value for x: ");
  scanf("%d", &x);

  result = powerize(x, 4);
  printf("Result of equation is: %d\n", result);

  return 0;
}

