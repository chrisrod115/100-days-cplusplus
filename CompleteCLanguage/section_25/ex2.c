#include <stdio.h>
#include <stdlib.h>

char* str_cpy(char* strDestination, char* strSrc);

int main()
{
    char Chris[] = "Christopher"; 
    char NewChris[100];
    char* tempResult;

    tempResult = str_cpy(NewChris, Chris);

    printf("The new string is: %s \n", tempResult);
    printf("The new string is: %s \n", NewChris);

    return 0;
}

char* str_cpy(char* strDestination, char* strSrc)
{
    char* tempPtr = strDestination;
    int i = 0;
    while (strSrc[i] != '\0')
    {
        strDestination[i] = strSrc[i];
        i++;
    }
    strDestination[i] = '\0';
    return tempPtr; 
}

