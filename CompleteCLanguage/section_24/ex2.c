// The following file will take a string and output the length of the string
#include <stdio.h>

#define SIZE 100

int str_len(char* str, int* count) {
    for (int i = 0; str[i] != '\0'; i++) {
        (*count)++;
    }
    return *count;
}

int main() {
    char U_INPUT[SIZE];
    int length_result = 0, counter = 0;
    printf("Enter a string: "); 
    scanf("%s", U_INPUT);

    length_result = str_len(U_INPUT, &counter);
    printf("The length of the string is: %d\n", length_result);

    return 0;
}
