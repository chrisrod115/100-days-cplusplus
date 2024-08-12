#include <stdio.h>

#define SIZE 11

int main() {
    int i, j, mat[SIZE][SIZE];
    
    for (i = 1; i < SIZE; i++)
    {
        for (j = 1; j < SIZE; j++)
        {
            mat[i][j] = i*j;
        }
    }

    for (i = 1; i < SIZE; i++)
    {
        for (j = 1; j < SIZE; j++)
        {
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}