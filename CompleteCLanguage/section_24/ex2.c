#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Include string.h for string manipulation functions


#define SIZE 10

int find_str_len(char* str)
{
    int i = 0, length = 0;
    while (str[i] != '\0' && str[i] != '\n')
    {
        i++;
        length++;
    }
    return length;
}


int main() {
    int length_result;
    char name[SIZE];
    fgets(name, SIZE, stdin);

    length_result = find_str_len(name);
    // Remove newline character if it exists
    if (name[strlen(name) - 1] == '\n')
    {
        name[strlen(name) - 1] = '\0';
    }
    printf("The string: %s is %d characters long.\n", name, length_result);
    return 0;
}