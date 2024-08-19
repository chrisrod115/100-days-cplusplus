#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void average(float total, int count){
    printf("The average of the array is: %f", total/count);
}

void sum(int* arr, int length){
    int count = 0;
    float total = 0;
	for(int i = 0; i < length; i++){
        total += arr[i];
        count++;
    }
    average(total, count);
}

int main(){
	int new_arr[SIZE] = {0,1,2,3,4,5,6,7,8,9};
    int len = sizeof(new_arr)/sizeof(new_arr[0]);

    sum(new_arr, len);
    
	return 0;
}