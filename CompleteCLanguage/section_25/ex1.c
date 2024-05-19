#include <stdio.h>
#include <stdlib.h>

int str_len(char* str);

int main() 
{
    return 0;
}

int str_len(char* str)
{
    int i; 
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}