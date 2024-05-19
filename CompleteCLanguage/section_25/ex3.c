#include <stdio.h>
#include <stdlib.h>

int str_cmp(char *str1, char *str2, int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        if (str1[i] != str2[i])
        {
            return 1;
            break;
        }
    }
    return 0;   
}

int main()
{
    char hello[] = "Hello";
    char digit[] = "Digit";
    int length = sizeof(hello)/sizeof(hello[0]);
    int result;

    result = str_cmp(hello, digit, length);
    if (result == 0)
    {
        printf("Same string.!");
    }
    else
    {
        printf("Not same string.");
    }

    return 0;
}