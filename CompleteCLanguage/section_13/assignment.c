/*
The instructions for the questions on this assignment are:

Read the question.

Try solving it without going back to previous videos/material.

After few attempts, if you still have any doubts, go back to the other videos or material.

Create your final solution.

Compare it with the proposed solution.

Write down all relevant notes.



Let's go!

Questions for this assignment
Write a program that reads from the user 2 
values of an "integer" type. The program should print 
"EQUAL" if both the values are equal. Otherwise, the 
program should print "NOT EQUAL".

Write a program that reads from the user 3 values
of an "integer" type. The program should print "EQUAL" 
if all the values are equal. Otherwise, the program should 
print "NOT EQUAL".

Note: There's more than just 1 "correct" solution for this question.

Write a program that reads from the user a "three-digit" 
integer value. The program should print "ASCENDING" 
if the three digits of the number are in ascending order 
(from left to right). If not, the program should print "NOT ASCENDING".



For example:

* Input: 137 --> ASCENDING (1<3<7)

* Input: 143 --> NOT ASCENDING.

Write a program that reads an input number from the user. 
The program should print "1" if the value is positive, "-1" 
if it's negative, and "0" if it equals to zero.
*/
#include <stdio.h>
#include <string.h>

int question_one(int* val1,int* val2)
{
    return (*val1 == *val2) ? 0 : 1;
}

int question_two(int* val1,int* val2, int* val3)
{
    return ((*val1 == *val2) && (*val2 == *val3) ) ? 0 : 1;
}

int question_three(int *val1, int *val2, int *val3) {
    return ((*val1 <= *val2) && (*val2 <= *val3)) ? 0 : 1;
}
int main()
{
    int x, y, z, xxx;
    int arr[3];

    printf("Enter value 1: ");
    scanf("%d", &x);
    printf("Enter value 2: ");
    scanf("%d", &y);
    if ((question_one(&x, &y)) == 0)
    {
        printf("Numbers %d and %d are equal.\n", x, y);
    }
    else
    {
        printf("Numbers %d and %d are not equal.\n", x, y);
    }

    printf("Enter value 1: ");
    scanf("%d", &x);
    printf("Enter value 2: ");
    scanf("%d", &y);
    printf("Enter value 3: ");
    scanf("%d", &z);
    if ((question_two(&x, &y, &z)) == 0)
    {
        printf("Numbers %d, %d and %d are equal.\n", x, y, z);
    }
    else
    {
        printf("Numbers %d, %d and %d are not equal.\n", x, y, z);
    }


    printf("Enter a three digit number: ");
    scanf("%d", &xxx);

    for (int i = 2; i >= 0; i--)
    {
        arr[i] = xxx % 10;
        xxx /= 10;
    }
    
    if (question_three(&arr[0], &arr[1], &arr[2]) == 0)
    {
        printf("The following: %d %d %d are ascending.",arr[0], arr[1], arr[2]);
    }
    else
    {
        printf("The following: %d %d %d are not ascending.",arr[0], arr[1], arr[2]);

    }

    printf("Enter value 1: ");
    scanf("%d", &x);

    if ((x%2 ==0))
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}