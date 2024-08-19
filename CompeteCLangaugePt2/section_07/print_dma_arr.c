#include <stdio.h>
#include <stdlib.h>

void display_arr(int* arr, int arr_size)
{
    printf("Printing the Grades: \n");
    for(int i = 0; i < arr_size; i ++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nDone\n");
}

int main()
{
    int* grades;
    int arrSize;

    printf("Enter the number of grades that you have: ");
    scanf("%d", &arrSize);

    grades = (int*)malloc((sizeof(int)) * arrSize);

    if (grades == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for(int i = 0; i < arrSize; i++)
    {
        printf("Enter grade %d: ", i + 1);
        scanf("%d", &grades[i]);
    }

    display_arr(grades, arrSize);

    free(grades); // Don't forget to free the allocated memory

    return 0;
}
