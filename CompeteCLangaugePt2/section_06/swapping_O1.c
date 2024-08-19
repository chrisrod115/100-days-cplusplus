#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void swap(void** ptr1, void** ptr2)
{
	void* temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void printArr(int* arr, int arr_num)
{
    printf("Original Arr%d: ", arr_num);
    for(int i = 0; i < SIZE; i ++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
	int arr1[SIZE] = {1,2,3,4,5};
	int arr2[SIZE] = {5,6,7,8,9};

    int* ptr1 = arr1;
    int* ptr2 = arr2;

    printArr(arr1, 1);
    printArr(arr2, 2);

    swap((void**)&ptr1, (void**)&ptr2);

    printf("\n");
    printArr(arr1, 1);
    printArr(arr2, 2);


	return 0;
}

