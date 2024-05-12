#include <stdio.h>

int main()
{
    float x, y;
    char operator; 

    printf("Welcome to the calculator app!\n");
    printf("Enter first number: ");
    scanf("%f", &x);

    printf("Enter an operator: ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &y);

    switch (operator)
    {
        case '+':
            printf("%.1f %c %.1f = %.1f\n", x, operator, y, (x+y));
            break;
        case '-':
            printf("%.1f %c %.1f = %.1f\n", x, operator, y, (x-y));
            break;
        case '*':
            printf("%.1f %c %.1f = %.1f\n", x, operator, y, (x*y));
            break;
        case '/':
            // Check if y is not zero to avoid division by zero
            if (y != 0)
                printf("%.1f %c %.1f = %.1f\n", x, operator, y, (x/y));
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("Error: Invalid operator!\n");
            break;
    }
    return 0;
}
