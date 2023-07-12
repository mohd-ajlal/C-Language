#include<stdio.h>
int area(int side);
int main()
{
    int a;
    scanf("%d",&a);
    
    printf("The area of square is:%d",area(a));
    printf("\n");
    
    return 0;
}

int area(int side)
{
    int area_square;
    area_square=side*side;
    return area_square;
}