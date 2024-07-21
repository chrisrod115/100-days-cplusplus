#include <stdio.h>
#include <stdlib.h>

#define SIZE 6
void arr_sum(int* arr, float* total){
    for (int i = 0; i < SIZE; i++){
        *total += arr[i];
    }
}

void avg_arr(int* arr, float* average, float* total){
    for (int i = 0; i < SIZE; i++){
        *average = *total/SIZE;
    }
}

int main(){
    int arr[SIZE] = {1,2,3,4,5,6};
    float sum = 0;
    float avg = 0;

    arr_sum(arr, &sum);
    avg_arr(arr, &avg, &sum);

    printf("The average: %f\n", avg);

    return 0;
}