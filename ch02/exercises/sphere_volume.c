//Author: Christian Brewer
//Date: 2024-09-20
//Name: Volume of Sphere

#include <stdio.h>

int main(void) {
  const double PI = 3.141592653589793;
  double radius, volume;

  printf("Enter radius of the sphere: ");
  scanf("%lf", &radius);

  volume = 4.0f / 3.0f * PI * radius * radius * radius;

  printf("Volume: %lf\n", volume);

  return 0;
}