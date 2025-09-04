#include <stdio.h>
int main()
{
    union code
    {
        int a;
        float b;
        char c;
    } x;

    
    x.a = 123;
    printf("Integer = %d \n", x.a);

    x.b = 12.3;
    printf("Floating = %.2f \n", x.b);

    x.c = 'A';
    printf("Character = %c \n", x.c);
    printf("Floating value =  %f and Character = %c ",x.b,x.c);

    return 0;
}