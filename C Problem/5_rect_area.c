// WAP in C to enter length and breadth of a rectangle and print its area.

#include<stdio.h>

    int main(){
    int len, bre;
    printf("Enter len and breadth: ");
    scanf("%d%d", &len, &bre);
    printf("Area of rectangle is: %d", len*bre);
    return 0;
}