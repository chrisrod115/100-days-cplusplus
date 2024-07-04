#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 20
// Custom strcmp function
int custom_strcmp(const char* str1, const char* str2)
{   
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    char string_1[SIZE], string_2[SIZE];
    int result = 0;
    printf("Welcome to string compare tool!");
    printf("Enter the first string: ");
    scanf("%s", string_1);
    printf("Enter the second string: ");
    scanf("%s", string_2);

    result = custom_strcmp(&string_1, &string_2);
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
