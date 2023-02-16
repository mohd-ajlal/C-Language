// arithmetic operation in int data type

#include <stdio.h>

int main()
{
    int x , y;
    printf("Entwer two numbers: ");
    scanf("%d%d", &x, &y);
    printf("x = %d, y = %d\n", x, y);
    printf("x +y: %d\n", x + y);
    printf("x-y: %d\n", x - y);
    printf("x*y: %d\n", x * y);
    printf("x/y: %d", x / y);
    return 0;
}