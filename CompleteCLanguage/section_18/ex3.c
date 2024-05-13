#include <stdio.h>

int min_max_3(int a, int b, int c)
{
    if (a > b)
        if (a > c)
            return a;
        else
            return c;
    else if (b > c)
        return b;
    else return c;
}
int main() {
    int x, y, z, max;
    printf("Enter value a: ");
    scanf("%d",&x);
    printf("Enter value b: ");
    scanf("%d",&y);
    printf("Enter value c: ");
    scanf("%d",&z);

    max = min_max_3(x,y,z);
    printf("Max = %d\n", max);
    
    return 0;
}