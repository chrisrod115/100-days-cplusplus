#include <stdio.h>
#include <stdlib.h>

int main()
{
    float data, decimal_data;

    printf("Enter a floating point number: ");
    scanf("%f", &data); 

    decimal_data = data - (int)data;

    printf("The decimal data result is: %.1f\n", decimal_data); 

    return 0; 
}