#include <stdio.h>
#include <stdlib.h>

void string_cpy(char* a, char* b)
{
    while (*a != '\0')
    {
        *b = *a;
        a ++;
        b ++;
    }
}


int main()
{
    char str1[20], str2[20];
    printf("Enter a string to copy: ");
    fgets(str1, sizeof(str1), stdin);

    string_cpy(str1, str2);
    printf("%s", str2);
}