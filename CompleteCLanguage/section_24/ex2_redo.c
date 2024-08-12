#include <stdio.h>
#include <string.h>

#define STR_SIZE_LIM 20

void string_length(char* string){
    int count = 0;
	while(string[count] != '\0'){
        count++;
    }
    printf("The length of the string is: %d\n", count);

};

int main(){
    char input_string[STR_SIZE_LIM];

	printf("Enter a string (no spaces): ");
    scanf("%s", input_string);

    string_length(input_string);

	return 0;
}