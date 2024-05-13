#include <stdio.h>

int main() {
    int arr[] = {1,2,84,4,5,6};
    int max = 0;
    for (int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)
    {
        if (arr[i]> max)
        {
            max = arr[i];
        }
    }
    printf("The max in the array is: %d\n", max);
    return 0;
}