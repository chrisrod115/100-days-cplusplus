#include <stdio.h>

int main()
{
	int height = 0, width = 0;
	printf("Enter a height: ");
	scanf("%d", &height);
	printf("Enter a width: ");
	scanf("%d", &width);
	printf("The area is: %d\n", (height*width));
	return 0;	
}