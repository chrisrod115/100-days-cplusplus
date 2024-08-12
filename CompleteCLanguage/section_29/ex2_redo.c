#include <stdio.h>
#include <stdlib.h>

typedef struct date
{
    int year;
    int day;
    int month;

}Date;

void print_date(Date dt){
    printf("Year = %d, Month = %d, Day = %d\n", dt.year, dt.month, dt.day);
}

Date input_date(){
    Date dt;

    printf("Enter day(1-31): ");
    scanf("%d", &dt.day);

    printf("Enter month(1-12): ");
    scanf("%d", &dt.month);

    printf("Enter year(yy): ");
    scanf("%d", &dt.year);
    
    return dt;
}

int main(){
    Date grad;
    Date grad2;
    grad = input_date();
    grad2 = input_date();
    print_date(grad);
    print_date(grad2);
	return 0;
}