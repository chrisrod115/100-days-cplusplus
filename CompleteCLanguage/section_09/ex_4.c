#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Your task is to implement the swap functionality between 
    2 Floating Point variables holding 2 floating point values.
    Print the values of both variables BEFORE and AFTER the swapping functionality. 
    Note: Try solving this exercise without going back to the previous solution. That's how you practice.
    */

   float f1, f2, temp;

   printf("Enter float one: ");
   scanf("%f", &f1);
   printf("Enter float two: ");
   scanf("%f", &f2);

   printf("You entered --> value one: %.2f and value two: %.2f\n", f1, f2); 
   printf("After the swap. Here are the results: \n"); 
   temp = f1;
   f1 = f2;
   f2 = temp;

   printf("Value one: %.2f and value two: %.2f\n", f1, f2); 

   return 0;
}
