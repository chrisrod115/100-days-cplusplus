#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void func(int* arr, int* max){
    for (int i = 0; i < SIZE; i++){
        if (arr[i] > *max){
            *max = arr[i];
        }
    }
}

int main(){
    int arr[SIZE] = {5, 64, 71, 2, 5};
    int max = 0;

    func(arr, &max);
    printf("The max in the array is: %d\n", max);
    
    return 0;
}