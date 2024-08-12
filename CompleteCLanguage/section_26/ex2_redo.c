#include <stdio.h>
#include <stdlib.h>

int recursive(int num){
	// 4 + sum(123)
    if(num == 0){
        return 0;
    }
    
    return num % 10 + recursive(num/10);
};

int main(){
	int num = 1234;
    int res = 0;

    res = recursive(num);
    printf("The sum of the number: %d is %d", num, res);
	return 0;
}