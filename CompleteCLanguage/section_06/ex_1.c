#include <stdio.h>
#include <stdlib.h>

void func(char* first, char* last){
    printf("First name is: %s and last name is %s", first, last);
};

int main(){
	char first[] = "chris";
	char last[] = "rod";

    func(first, last);
	return 0;
}