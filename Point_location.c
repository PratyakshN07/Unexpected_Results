#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the coordinates = ");
    scanf("%d %d", &x, &y);
    if (y == 0 && x == 0)
    {
        printf("Lies at Origin");
    }
    else if (x != 0 && y != 0)
    {
        printf("Lies in a quadrant");
    }

    else if (x == 0)
    {
        printf("Lies on Y-axis");
    }
    else
    {
        printf("Lies on X-axis");
    }
    
}