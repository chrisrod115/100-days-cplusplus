#include <stdio.h>
#include <stdlib.h>

int fibonacci(int index)
{
    int result;
    if (index == 0)
    {
        return 0;
    }
    else if (index == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(index - 1) + fibonacci(index - 2);
    }
}

int main()
{
    int user_index = 0;
    printf("Enter an number: ");
    scanf("%d", &user_index); 

    user_index = fibonacci(user_index);
    printf("The fibonacci result is: %d\n", user_index); 
    return 0;
}