#include <stdio.h>

int main() {
    int arr[] = {2,5,6,7,2};
    int i, max = 0;

    for (i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)
    {
        if (arr[i] > arr[max])
        {
            max = i;
        }
    }

    printf("Index of max number: %d\n", max);
    return 0;
}
