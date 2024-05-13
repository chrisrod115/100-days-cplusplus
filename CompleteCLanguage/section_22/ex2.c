#include <stdio.h>

void findMax(int num1, int num2, int* pMax, int* pMin)
{
    if (num1 > num2)
    {
        *pMin = num2;
        *pMax = num1;
    }
    else
    {
        *pMin = num1;
        *pMax = num2;
    }
}

int main() 
{
    int a = 5, b = 7;
    int max, min;
    findMax(a,b, &max, &min);
    printf("Max between %d and %d = %d\n", a, b, max);
    printf("Min between %d and %d = %d\n", a, b, min);
    return 0;
}