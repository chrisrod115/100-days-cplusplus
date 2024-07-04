#include <stdio.h>
#include <stdlib.h>

// Fibonacci example: 1,1,2,3,5,8,13...
int fibonacci(int index)
{
    if (index == 0)
    {
        return 0;
    }
    else if (index == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(index - 2) + fibonacci(index - 1);
    }
}

int main()
{
    int u_index = 0, result = 0;
    printf("\n\nEnter the user index: ");
    scanf("%d", &u_index);

    result = fibonacci(u_index);
    printf("The number at index: %d return the corresponding fibonacci number: %d\n\n", u_index, result);
    return 0;
}