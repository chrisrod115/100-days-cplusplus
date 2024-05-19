#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int find_str_len(char* str)
{
    int i = 0, length = 0;
    while (str[i] != '\0')
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
    // Remove newline character if present
    if (name[length_result - 1] == '\n') 
    {
        name[length_result - 1] = '\0';
    }
    printf("The string: %s is %d characters long.\n", name, length_result);
    
    return 0;
}