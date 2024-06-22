// Find the sum of three digit num

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int user_input, result;
    int ones, tens, hundreds;

    printf("Enter a three digit num: ");
    scanf("%d", &user_input);

    ones = user_input % 10;
    tens = (user_input / 10) % 10;
    hundreds = user_input / 100;

    result = ones + tens + hundreds;

    printf("Ones: %d, Tens: %d, Hundreds: %d, Result: %d", ones, tens, hundreds, result);



    return 0;
}