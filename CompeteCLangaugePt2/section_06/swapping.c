#include <stdio.h>
#include <stdlib.h>

void swap(int* val1, int* val2){
    int temp;
    temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}

void swap_arr_on(int* val1, int* val2, int size){
    int i;
    for(i = 0; i < size; i++){
        swap(&val1[i], &val2[i]);
    }
}

void print_arr(int* arr, int size){
    int i;
    for(i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int* generateArr(int size){
    int i;
    int* arr = (int*)malloc(size * sizeof(int));  // Corrected memory allocation
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        exit(1); // Exit if memory allocation fails
    }
    for(i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    return arr;
}

int main(){
    int sizeArr1, sizeArr2;
    int* Arr1;
    int* Arr2;

    printf("Enter size of array1: ");
    scanf("%d", &sizeArr1);
    printf("Enter size of array2: ");
    scanf("%d", &sizeArr2);

    if (sizeArr1 != sizeArr2) {
        printf("Error: Arrays must be of the same size for swapping.\n");
        return 1;
    }

    Arr1 = generateArr(sizeArr1);
    Arr2 = generateArr(sizeArr2);

    printf("Array 1 before swap:\n");
    print_arr(Arr1, sizeArr1);
    printf("Array 2 before swap:\n");
    print_arr(Arr2, sizeArr2);

    swap_arr_on(Arr1, Arr2, sizeArr1);

    printf("Array 1 after swap:\n");
    print_arr(Arr1, sizeArr1);
    printf("Array 2 after swap:\n");
    print_arr(Arr2, sizeArr2);

    free(Arr1);
    free(Arr2);

    return 0;
}
