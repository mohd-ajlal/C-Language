// A pointer is a variable that stores the memory address of another variable as its value.

// A pointer variable points to a data type (like int) of the same type, and is created with the * operator.

#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;
    printf("%d\n", a);
    printf("%d\n", *p);
    printf("%d\n", &a);
    printf("%d\n", &p);
    return 0;
}
