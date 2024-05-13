#include <stdio.h>

int factorial(int a)
{
    int result = 1;
    if (a < 0)
    {
        return -1;
    }
    while (a != 0)
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
    scanf("%d", &x);

    printf("The factorial of %d is: %d\n", x, factorial(x));
    return 0;
}