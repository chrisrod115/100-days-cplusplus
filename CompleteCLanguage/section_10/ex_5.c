// Find the sum of three digits

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int user_input, result;
    int ones, tens, hundreds;

    printf("Enter a number: ");
    scanf("%d", &user_input); 

    ones = user_input % 10;
    tens = (user_input / 10) % 10;
    hundreds = user_input / 100;

    result = ones + tens + hundreds;
    printf("ones: %d, tens: %d, hundreds: %d", ones, tens, hundreds); 
    printf("The result of the sum of %d is %d\n", user_input, result); 

    return 0;
}