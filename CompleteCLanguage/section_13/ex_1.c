#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2 = 0;

    printf("Enter num1: ");
    scanf("%d", &num1);
 
    printf("Enter num2: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("Num1: %d is > num2: %d \n", num1, num2);
    }
    else
    {
        printf("Num1: %d is < num2: %d \n", num1, num2);
    }

}