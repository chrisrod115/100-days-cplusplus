#include <stdio.h>
#include <stdlib.h>

struct date{
    int month;
    int day;
    int year;
};

int main(){
	struct date d1;
    
    printf("Enter number for month: (mm) ");
    scanf("%d", &d1.month);
    
    printf("Enter number for day: (dd) ");
    scanf("%d", &d1.day);
    
    printf("Enter number for year: (yyyy) ");
    scanf("%d", &d1.year);

    printf("Date: %d/%d/%d", d1.month, d1.day, d1.year);

	return 0;
}