#include <stdio.h>
#include <stdlib.h>

int main(){
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0){
        if (year % 100 == 0){
            if (year % 400 == 0){
                printf("Is a leap year");
            } else{
                printf("Not leap year");
            }
        } else{
            printf("Is a leap year");
        }
    } else{
        printf("not a leap year");
    }
    
    return 0;
}