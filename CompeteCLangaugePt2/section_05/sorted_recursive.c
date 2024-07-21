#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int sorted_recursive(int* arr, int index){
    if (index == (SIZE -1)){
        return 1;
    }

    if (arr[index] > arr[index + 1]){
        return 0;
    }

    return sorted_recursive(arr, index + 1);

}

int main(){
    int arr[SIZE] = {1,2,3,2,7};
    int res = 0;
    res = sorted_recursive(arr, 0);
    if (res == 1){
        printf("The array is sorted!\n");
    }
    else if (res == 0){
        printf("The array is not sorted!\n");
    }
    else{
        printf("Something went wrong!\n");
    }
    
    return 0;
}