#include <stdio.h>
#include <stdlib.h>

int main(){
    int year;
    int age;
    int birth_year;

    printf("Enter current year: \n");
	scanf("%d", &year);

    printf("Enter your age: \n");
	scanf("%d", &age);

    birth_year = year-age;

    printf("You were born in: %d", birth_year);
	return 0;
}