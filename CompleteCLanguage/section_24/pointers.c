#include <stdio.h>
#include <stdlib.h>

void hello_world(char* str);
void first_last_name(char* str);
void first_last_age(char* first, char* last, int* age);

int main()
{
    int new_age = 26;
    hello_world("Hello World!");
    first_last_name("ChrisRodriguez");
    first_last_age("Chris", "Rodriguez", &new_age);
    return 0;
}

void hello_world(char* str)
{
    printf("%s\n", str);
}

void first_last_name(char* str)
{
    printf("%s\n", str);
}

void first_last_age(char* first, char* last, int* age)
{
    printf("First: %s\n", first);
    printf("Last: %s\n", last);
    printf("Age: %d\n", *age);
}
