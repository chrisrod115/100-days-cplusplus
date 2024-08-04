#include <stdio.h>

#define MAX 10

int count_print(int* arr, int size){
    int count[MAX] = {0};

    for (int i = 0; i < size; i ++){
        // count = {0,0,0,0,0,0,0....}
        // arr = {1,3,6,7,3,5,6,3,7,8,4,3,2}
        if (arr[i] >= 0 && arr[i] < MAX){
            count[arr[i]] ++; 
        }
    }

    for (int i = 0; i < MAX; i ++){
        if (count[i] > 0){
            printf("%d: %d times\n", i, count[i]);
        }

    }

}

int main(){
    int arr[] = {1,1,2,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    count_print(arr, size);
}