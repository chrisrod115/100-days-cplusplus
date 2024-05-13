// Palindrome
// Is palindrome??
#include <stdio.h>

#define SIZE 5

int main() {
    int arr[SIZE] = {1, 3, 3, 2, 1};
    int flag = 1;
    int i, j;

    for (i = 0; i < SIZE/2; i ++)
    {
        if (arr[i] != arr[SIZE - 1 - i])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        printf("Palimdrome\n");
    else if (flag == 0)
        printf("Not palimdrome\n");
    return 0;
}