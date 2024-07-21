// if array at some element is the sum of both neighbors
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
void neighbors(int* arr, int* result){
    // {1, 4, 7, 3, 2}
    for (int i = 1; i < (SIZE - 1); i++){
        int sum = arr[i - 1] + arr[i + 1];
        if (arr[i] == sum){
            *result = arr[i];
        }
    }
}

int main(){
    int arr[SIZE] = {1, 4, 7, 3, 2};
    int res = 0;
    neighbors(arr, &res);
    if (res != 1){
        printf("There are no perfect neighbors! SOZ\n");
    }
    printf("This fool has perfect neighbors: %d\n", res);
    return 0;
}