#include <stdio.h>

void min_max(int a, int b)
{
    if (a > b)
    {
        printf("Between %d and %d, %d is max!\n", a, b, a);
        printf("Between %d and %d, %d is min!\n", a, b, b);
    }
    else if (a < b)
    {
        printf("Between %d and %d, %d is max!\n", a, b, b);
        printf("Between %d and %d, %d is min!\n", a, b, a);
    }
    else
    {
        printf("%d and %d are equal.", a, b);
    }
}

int main() {
    int x, y;
    printf("Enter value a: ");
    scanf("%d",&x);
    printf("Enter value b: ");
    scanf("%d",&y);

    min_max(x,y);
    
    
    return 0;
}