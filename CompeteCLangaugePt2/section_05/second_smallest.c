#include <stdio.h>

#define MAX 5

int second_smallest(int* arr)
{
    int min1 = arr[0];
    int min2 = arr[0];
    for (int i = 0; i < MAX; i++)
    {
        if (arr[i] < min1)
        {
            min2 = min1;
            min1 = arr[i];
        }
        else if (arr[i] < min2)
        {
            min2 = arr[i];
        }
    }
    return min2;
}

int main()
{
    int arr[MAX] = {1, 1, 2, 3, 4};
    int res = second_smallest(arr);
    printf("The second smallest is: %d", res);
    return 0; 
}