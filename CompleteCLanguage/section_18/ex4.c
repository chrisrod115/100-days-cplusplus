#include <stdio.h>

float average_grade()
{
    float a, b, c, avg;
    printf("Enter 3 grades, each separated by a space: ");
    scanf("%f%f%f", &a, &b, &c);

    return ((a+b+c)/3);
}
int main() {
    printf("You average grade is: %f\n", average_grade());
    return 0;
}