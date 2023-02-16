// WAP in C to enter raduis of a circle and print its diameter, circumference and area.

#include<stdio.h>

    int main(){
    int radius;
    printf("Enter radius: ");
    scanf("%d", &radius);
    printf("Diameter of circle is: %d", 2*radius);
    printf("Circumference of circle is: %f", 2*3.14*radius);
    printf("Area of circle is: %f", 3.14*radius*radius);
    return 0;
}