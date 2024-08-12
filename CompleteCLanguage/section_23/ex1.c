#include <stdio.h>

#define SIZE 3

int main() {

    int date[SIZE] = {1, 2, 2000};
    int date2[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        date2[i] = date[i];
    }
    for (int i = 0; i < SIZE; i++)
    {
        printf("Original date: %d\n", date[i]);
        printf("Copied date: %d\n", date[i]);
        printf("Original addy: %d\n", &date[i]);
        printf("Copied addy: %d\n", &date[i]);
    }
    return 0;
}