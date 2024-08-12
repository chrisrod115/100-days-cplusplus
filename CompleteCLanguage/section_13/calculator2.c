#include <stdio.h>
#include <stdlib.h>

void calculator(float* num1, float* num2, char* operator){
    switch (*operator)
    {
    case '+':
        printf("%.2f + %.2f = %.2f", *num1, *num2, *num1 + *num2);
        break;
    case '-':
        printf("%.2f + %.2f = %.2f", *num1, *num2, *num1 - *num2);
        break;
    case '/':
        if(*num2 != 0){
            printf("%.2f + %.2f = %.2f", *num1, *num2,  *num1 / *num2);
            break;
        }
        else{
            printf("Infinity");
            break;

        }
    case '*':
        printf("%.2f + %.2f = %.2f", *num1, *num2, (*num1) * (*num2));
        break;

    
    default:
        break;
    }

};

int main(){
	float num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator: ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);
    
    calculator(&num1, &num2, &operator);

	return 0;
}