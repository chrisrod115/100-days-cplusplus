#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Corrected function signature to return a char pointer
char* chris_func()
{
    char *chris = malloc(6 * sizeof(char)); // Allocate memory for "chris" string
    if (chris == NULL) {
        perror("Failed to allocate memory");
        exit(EXIT_FAILURE);
    }
    strcpy(chris, "chris");

    printf("Address and value: %p %s\n", (void*)chris, chris);
    printf("Address and value: %p %s\n", (void*)(chris + 1), chris + 1);
    printf("Address and value: %p %s\n", (void*)(chris + 2), chris + 2);
    printf("Address and value: %p %s\n", (void*)(chris + 3), chris + 3);
    printf("Address and value: %p %s\n", (void*)(chris + 4), chris + 4);

    return chris; // Return the dynamically allocated string
}

void arr_func()
{
    int arr[] = {1, 2, 3};
    printf("Address and value: %p %d\n", (void*)arr, arr[0]);
    printf("Address and value: %p %d\n", (void*)(arr + 1), arr[1]);
    printf("Address and value: %p %d\n", (void*)(arr + 2), arr[2]);
    // Fixed the values to match the correct array elements
    printf("Address and value: %p %d\n", (void*)(arr + 3), arr[0] + 3);
    printf("Address and value: %p %d\n", (void*)(arr + 4), arr[0] + 4);
}

void chris_one_by(char new[])
{
    printf("\n");
    printf("%s\n", new);
    // Fixed pointer arithmetic
    printf("%c\n", new[1]);
    printf("%c\n", new[2]);
    printf("%c\n", new[3]);
    printf("%c\n", new[4]);
}

int main()
{
    arr_func();
    char *c_new = chris_func(); // Correctly handling the returned pointer
    chris_one_by(c_new);
    free(c_new); // Freeing the dynamically allocated memory
    return 0;
}
