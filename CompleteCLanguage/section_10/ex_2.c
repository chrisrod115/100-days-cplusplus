// Write a program that calculates the sum of the sequence.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a_0, diff, sum, result;
    int n;

    printf("Enter the initial term: ");
    scanf("%f", &a_0); 
    printf("Enter the differnece in arithmatic sequence: ");
    scanf("%f", &diff); 
    printf("Enter the nth term: ");
    scanf("%d", &n); 

    sum = a_0 + (n - 1) * diff;
    result = (a_0 + sum) * ((float)n/2);
    printf("The nth result is: %.2f\n", result); 
    
}