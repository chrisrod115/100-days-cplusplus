#include <stdio.h>
#include <stdlib.h>

int main()
{
    float height, width, result;

    printf("Enter rectangle height: ");
    scanf("%f", &height);

    printf("Enter rectangle width: ");
    scanf("%f", &width);

    result = height * width;
    printf("The total area of you rectangle is: %.2f\n", result);
    

    return 0;
}