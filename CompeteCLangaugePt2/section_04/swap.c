#include <stdio.h>
#include <stdlib.h>

void func(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 10, y = 5;
    printf("There are the original numbers: %d, %d\n", x, y);
    func(&x, &y);
    printf("There are the swapped numbers: %d, %d\n", x, y);

    return 0;
}