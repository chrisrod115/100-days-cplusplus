#include <stdio.h>
#include <stdlib.h>

int sum_of_digits(int a)
{
    if(a < 0)
    {
        a = -a;
    }
    else if (a == 0)
    {
        return 0;
    }
    else
    {
        return a % 10 + sum_of_digits(a / 10);\
    }
    
}

int main()
{
    int n, result = 0;
    printf("Enter a number: ");
    scanf("%d", n); 


    return 0;
}