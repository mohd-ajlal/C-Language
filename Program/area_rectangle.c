#include<stdio.h>

    int main(){
    
    float length, breadth, area;
    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter breadth: ");
    scanf("%f", &breadth);

    area = length * breadth;
    printf("Area of rectangle is: %f", area);

    return 0;
}
