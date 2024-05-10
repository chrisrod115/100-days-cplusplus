#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if ((num % 2 == 0) && (num != 0))
    {
        printf("Even\n");
    }
    else if (num == 0)
    {
        printf("Zero\n");
    }
    else
    {
        printf("Odd\n");
    }
}