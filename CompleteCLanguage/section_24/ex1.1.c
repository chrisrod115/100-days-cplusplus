// Full name string with space

#include <stdio.h>


int main() {
    char fullName[] = "Chris Rod";
    int i = 0;
    while (fullName[i] != '\0')
    {
        printf("%c", fullName[i]);
        i++;
    }
    printf("\n");
    return 0;
}