// n-th term in the sequence
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a_1, d, result;
    int n;

    printf("Enter the initial term: ");
    scanf("%f", &a_1); 
    printf("Enter the differnece in arithmatic sequence: ");
    scanf("%f", &d); 
    printf("Enter the nth term: ");
    scanf("%d", &n); 
    
    result = a_1 + (n - 1) * d;
    printf("The nth result is: %.2f\n", result); 

}