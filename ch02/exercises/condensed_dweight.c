//Author: Christian Brewer
//Date: 2024-09-20
//Name: Condensed D Weight

#include <stdio.h>
int main() {
  //init variables
  int height, length, width, volume;
    printf("Enter height of box: ");
    scanf("%d", &height);

    printf("Enter length of box: ");
    scanf("%d", &length);

    printf("Enter width of box: ");
    scanf("%d", &width);

    volume = length * width * height;

    printf("Volume: %d\n", volume);
    printf("Dimensional weight: %d\n", ((volume + 165) / 166));

    return 0;
}