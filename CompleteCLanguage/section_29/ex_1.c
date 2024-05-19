#include <stdio.h>
#include <stdlib.h>

struct date{
    int month;
    int day;
    int year;

};

int main()
{
    struct date d1;
    printf("Enter the month: ");
    scanf("%d", &d1.month);
    printf("Enter the day: ");
    scanf("%d", &d1.day);
    printf("Enter the year: ");
    scanf("%d", &d1.year);

    printf("Your date is: %d/%d/%d\n", d1.month, d1.day, d1.year);
    return 0;
}