#include <stdio.h>

void max_in_2_dig(int a)
{
    int max;
    if (a > 99 || a < 10)
        {
            printf("Not a two digit number!\n");
        }
    else
        {
            max = ((a%10) > a/10) ? (a%10) : (a/10);
            printf("The largest number of %d is: %d\n", a, max);
        }
}

int main() {
    int x;
    printf("Enter a two digit number: ");
    scanf("%d", &x);

    max_in_2_dig(x);
    return 0;
}