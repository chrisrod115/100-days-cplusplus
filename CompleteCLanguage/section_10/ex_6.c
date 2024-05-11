// print reverse number

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int user_input;
    int ones, tens, hundreds;

    printf("Enter a number: ");
    scanf("%d", &user_input); 

    ones = user_input % 10;
    tens = (user_input / 10) % 10;
    hundreds = user_input / 100;

    printf("THe number %d is: %d%d%d backwards.\n", user_input, ones, tens, hundreds);

    return 0;
}