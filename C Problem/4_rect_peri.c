// wap in c to enter length and breadth of a rectangle and print its perimeter.

#include<stdio.h>

    int main(){
    int len, bre;
    printf("Enter len and breadth: ");
    scanf("%d%d", &len, &bre);
    printf("Perimeter of rectangle is: %d", 2*(len+bre));
    return 0;
}