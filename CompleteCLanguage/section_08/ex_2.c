#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 1; i < 6; i ++)
    {
        for (int h = 1; h <= i; h++)
        {
            printf("%d", h);
        }
        for (int j = 0; j < 10 - i; j ++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}