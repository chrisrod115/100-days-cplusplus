#include <stdio.h>
#include <stdlib.h>

int sum_of_digits(int a)
{
    if(a < 0)
    {
        a = -a;  // Make the number positive if it's negative
    }

    if (a == 0)
    {
        return 0;  // Base case: if the number is 0, return 0
    }
    else
    {
        // Recursive case: sum the last digit with the sum of the remaining digits
        return a % 10 + sum_of_digits(a / 10);
    }
}

int main()
{
    int n = 4657, result;
    // printf("Enter a number: ");
    // scanf("%d", &n);

    result = sum_of_digits(n);
    printf("Sum of digits: %d\n", result);

    return 0;
}