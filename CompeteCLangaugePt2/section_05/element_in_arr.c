#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

int findKeyInArr(int* arr, int size, int key){
    int i = 0;
    int res = 0;
    for (i; i < size; i ++){
        if (arr[i] == key){
            res = arr[i];
        }
    }
    return res;
}

int main(){
    int new_arr[SIZE] = {1,2,5,7};
    int result;
    int key = 5;

    result = findKeyInArr(new_arr, SIZE, key);
    
    printf("The result is: %d\n", result);

    return 0;
}