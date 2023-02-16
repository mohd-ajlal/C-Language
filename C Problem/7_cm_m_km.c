// WAP in C to enter a length in centimeter and convert it into meter and kilometer.

#include<stdio.h>

    int main(){
    int cm;
    printf("Enter length in cm: ");
    scanf("%d", &cm);
    printf("Length in meter is: %f\n", cm/100.0);
    printf("Length in kilometer is: %f", cm/100000.0);
    return 0;
}