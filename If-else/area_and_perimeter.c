// given the length and breadth of a rectangle, write a program to find the area of rectangle is greater than its perimeter or not. also print the area and perimeter of the rectangle.

#include<stdio.h>

    int main(){
    int l, b, area, perimeter;
    printf("Enter the length and breadth of a rectangle: ");
    scanf("%d %d", &l, &b);
    area = l * b;
    perimeter = 2 * (l + b);
    printf("Area of rectangle is %d\nperimeter is %d\n", area, perimeter);
    if (area > perimeter){
        printf("Area of rectangle is greater than its perimeter");
    }
    else{
        printf("Area of rectangle is not greater than its perimeter");
    }
    return 0;
}