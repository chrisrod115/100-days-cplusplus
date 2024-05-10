#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int r = rand() % 2;
    if (r == 0){
        printf("Tails\n");
    }
    else{
        printf("Heads\n");
    }
}