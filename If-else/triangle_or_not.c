// Take three numbers input and tell if they can be the side of a triangle.

#include<stdio.h>

    int main(){
    int side1, side2, side3;
    printf("Enter side of triangles: ");
    scanf("%d%d%d", &side1, &side2, &side3);
    if(side1+side2>side3 && side1+side3 > side2 && side2+side3>side1){
        printf("Valid triangle");

    }
    else{
        printf("Invalid triangle");
    }
    return 0;
}