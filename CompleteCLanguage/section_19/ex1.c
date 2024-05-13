#include <stdio.h>

float area_of_rect()
{
    float h, w, area;
    printf("Enter a height");
    scanf("%f", &h);
    printf("Enter a width");
    scanf("%f", &w);

    area = (h * w);

    printf("Area = %f\n", area);
}

int main() {
    area_of_rect();
    return 0;
}