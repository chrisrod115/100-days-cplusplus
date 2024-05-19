#include <stdio.h>
#include <stdlib.h>

int total_digit(int a)
{
    if(a < 10)
        return 1;
    return 1 + total_digit(a/10);    
}

int main()
{
    int num;
    printf("Enter a digit: ");
    scanf("%d", &num);
    printf("Count of number %d is: %d\n", num, total_digit(num));
    return 0;
}