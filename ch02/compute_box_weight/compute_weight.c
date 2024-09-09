//computes dimensional weight of box

#include <stdio.h>
#define INCHES_PER_POUND 166

int main (void) {
int height, length, width, volume, weight;

printf("Enter height of box: ");
scanf("%d", &height);

printf("Enter width of box: ");
scanf("%d", &width);

printf("Enter length of box: ");
scanf("%d", &length);

volume = height * length * width;
weight = (volume + INCHES_PER_POUND - 1) / 166;

printf("Dimensions: %d%d%d\n", length, width, height);
printf("Volume: %d\n", volume);
printf("Dimensional Weight (pounds): %d\n", weight);

return 0;
}




