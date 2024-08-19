#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

void display_arr(int* arr)
{
	for(int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
}

int* createArr()
{
    int* dArr;
    dArr = (int*)malloc(SIZE*(sizeof(int)));

    if(!dArr)
    {
        printf("Error malloc allocation. \n");
    }

    for(int i = 0; i < SIZE; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &dArr[i]);
    }
    return dArr;
}

int main()
{
	int* arr;
    arr = createArr();
    display_arr(arr);
	return 0;
}