#include <stdio.h>
#include <stdlib.h>

#define SIZE 11

int main(){
	int multiplication_table[SIZE][SIZE];
    multiplication_table[0][0] = 0;


    for(int i = 1; i < SIZE; i++){
        for (int j = 1; j < SIZE; j++){
            multiplication_table[i][j] = i * j;
        }
    }

    for(int i = 1; i < SIZE; i++){
        for (int j = 1; j < SIZE; j++){
            printf("%5d", multiplication_table[i][j]);
        }
        printf("\n");
    }
	return 0;
}