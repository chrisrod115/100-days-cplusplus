#include <stdio.h>



int main()

{

    int a = 5, b = 2;
    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %.1f\n", a, b, (float)a/(float)b);
    printf("%d %% %d = %d\n", a, b, a%b);

    return 0;
}