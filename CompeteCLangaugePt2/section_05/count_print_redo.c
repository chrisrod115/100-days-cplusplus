#include <stdio.h>

#define MAX 10

void count_print(int* arr, int size){
    int toggle_list[MAX] = {0};

    for(int i = 0; i < size; i++){
        if (arr[i] < MAX) {
            toggle_list[arr[i]] += 1;
        } else {
            printf("Value %d exceeds the max limit of %d and will be ignored.\n", arr[i], MAX-1);
        }
    }

    for(int j = 0; j < MAX; j++){
        if(toggle_list[j] != 0){
            printf("%d: %d times\n", j, toggle_list[j]);
        }
    }
}

int main(){
    int arr[] = {1, 1, 2, 2, 3, 4, 11};  // 11 exceeds MAX
    int size = sizeof(arr)/sizeof(arr[0]);
    count_print(arr, size);
    return 0;
}
