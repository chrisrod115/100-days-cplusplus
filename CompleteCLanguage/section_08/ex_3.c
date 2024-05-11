#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cur_year, age;
    printf("Enter the current year: ");
    scanf("%d", &cur_year); 
    printf("Enter age: ");
    scanf("%d", &age); 

    printf("You were born: %d\n", cur_year - age);

    return 0;
}