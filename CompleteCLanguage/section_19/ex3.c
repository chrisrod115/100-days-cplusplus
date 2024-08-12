#include <stdio.h>

int factorial(int a)
{
    int result = 1;
    if (a < 0)
    {
        // Error handling for negative numbers
        printf("Factorial is not defined for negative numbers.\n");
        return -1;
    }
    while (a > 0)
    {
        result *= a;
        a--;
    }
    return result;
}

int main() 
{
    int x;
    printf("Enter a number to get factorial: ");
    if (scanf("%d", &x) != 1) {
        // Input validation
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    int fact = factorial(x);
    if (fact != -1) {
        printf("The factorial of %d is: %d\n", x, fact);
    }
    
    return 0;
}
