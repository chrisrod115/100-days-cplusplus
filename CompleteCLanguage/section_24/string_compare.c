#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 20
// Custom strcmp function
int custom_strcmp(const char* str1, const char* str2)
{   
    while (*str1 && (*str1 == *str2))
    {
        str1++;
        str2++;
    }
    return *(unsigned char*)str1 - *(unsigned char*)str2;
}

int main()
{
    char string_1[SIZE], string_2[SIZE];
    int result = 0;
    printf("Welcome to string compare tool!\n");
    printf("Enter the first string: ");
    scanf("%s", string_1);
    printf("Enter the second string: ");
    scanf("%s", string_2);

    result = custom_strcmp(string_1, string_2);
    if (result != 0)
    {
        printf("The strings %s and %s are not equal", string_1, string_2);
    }
    else
    {
        printf("The strings %s and %s are equal", string_1, string_2);

    }
    return 0;
}
