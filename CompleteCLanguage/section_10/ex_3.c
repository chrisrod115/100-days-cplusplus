// Write a program that calculates employees salary
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float per_hour, salary;
    int hour_mnth;

    printf("Enter your hourly pay: ");
    scanf("%f", &per_hour);
    printf("Enter the number of hours you work per month: ");
    scanf("%d", &hour_mnth);

    salary = (per_hour * hour_mnth) * 12;
    printf("Your salary is: $%f", salary); 

    return 0;
}