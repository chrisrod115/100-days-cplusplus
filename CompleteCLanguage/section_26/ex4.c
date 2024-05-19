#include <stdio.h>
#include <stdlib.h>

int sumArray(int arr[], int arr_size)
{
    if (arr_size == 0)
        return 0;
    return arr[arr_size - 1] + sumArray(arr, arr_size - 1);
}

int main()
{
    int myArray[] = {1, 2, 3, 4, 5}; 
    int length = sizeof(myArray)/sizeof(myArray[0]);
    int sum_result = sumArray(myArray, length);

    printf("The sum of the array is: %d\n", sum_result);

    return 0;
}