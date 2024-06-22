#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Custom strcmp function
int custom_strcmp(const char* str1, const char* str2)
{
    while (*str1 && (*str1 == *str2)) {  // Loop while both characters are equal and not at the end of the strings
        str1++;  // Move to the next character in str1
        str2++;  // Move to the next character in str2
    }
    return *(unsigned char*)str1 - *(unsigned char*)str2;  // Return the difference between the first non-matching characters
}

int main()
{
    char str1[20], str2[20];
    int result;

    printf("Enter str1: ");
    fgets(str1, sizeof(str1), stdin);


    printf("Enter str2: ");
    fgets(str2, sizeof(str2), stdin);


    result = custom_strcmp(str1, str2);
    printf("Comparison result: %d\n", result);

    

    return 0;
}
