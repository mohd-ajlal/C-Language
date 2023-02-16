#include<stdio.h>

    int main(){
    int base, height;
    printf("Enter base and height of triangle: ");
    scanf("%d %d", &base, &height);
    printf("Area of triangle is: %f", 0.5*base*height);
    return 0;
}