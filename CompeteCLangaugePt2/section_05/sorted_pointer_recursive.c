#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int func(int* arr, int index){
    if (index == 1 || index == 0){
        return 1;
    }
    // {1,2,3,4,5}
    //  ^
    //    ^
    if (*arr > (*arr + 1)){
        return 0;
    }
    return func(arr++, index - 1);

    
}

int main(){
    int arr[SIZE] = {1,2,3,4,5};
    int res = 0;
    
    res = func(arr, SIZE);

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