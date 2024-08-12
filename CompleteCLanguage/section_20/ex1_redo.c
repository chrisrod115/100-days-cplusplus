#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[] = {1,2,84,4,5,6};
    int max = 0;
    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < length; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    
    printf("The max of the array is: %d", max);
	return 0;
}