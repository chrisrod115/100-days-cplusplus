#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void sorted_or_not(int* arr, int* result){
    for (int i = 0; i < SIZE - 1; i++){
        if (arr[i] < arr[i+1]){
            continue;
        }
        else{
            *result = 1;
        }
    }

}

int main(){
    int arr[SIZE] = {1,2,4,6,8};
    int res = 0;
    sorted_or_not(arr, &res);
    if (res == 1){
        printf("Array is not sorted! %d\n", res);
    }
    else{
        printf("Array is sorted! %d\n", res);
    }
    return 0;
}
