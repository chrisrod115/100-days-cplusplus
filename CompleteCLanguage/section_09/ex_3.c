#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade1, grade2, grade3; 
    double average;
    printf("Enter Grade 1: ");
    scanf("%d", &grade1);
    printf("Enter Grade 2: ");
    scanf("%d", &grade2);
    printf("Enter Grade 3: ");
    scanf("%d", &grade3);

    average = ((double)(grade1+grade2+grade3)/3);
    printf("The average grade is: %.2lf%%\n", average); 

    return 0;
}