#include <stdio.h>
int main()
{
    int length, breadth;
    printf("enter the value of length\n");
    scanf("%d", &length);
    printf("enter the value of breadth\n");
    scanf("%d", &breadth);
    printf("the value of perimetre is %d", 2 * length + 2 * breadth);
    return 0;
}