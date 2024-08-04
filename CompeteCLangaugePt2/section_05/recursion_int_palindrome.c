#include <stdio.h>

int is_arrary_palindrome(int* arr, int size)
{
    if (size <= 1)
    {
        return 1;
    }
    if(arr[0] != arr[size - 1])
    {
        return 0;
    }
    else
    {
        return is_arrary_palindrome(arr + 1, size - 2);
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int res = is_arrary_palindrome(arr, size);
    if (res == 1)
    {
        printf("The array is palindrome \n");
    }
    else
    {
        printf("The array is not a palindrome \n");
    }
    return 0;
}