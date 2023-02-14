// take float input and print the fractional part of the real number

#include<stdio.h>

    int main(){
    float a, out;
    printf("Enter a real number: ");
    scanf("%f", &a);
    out = a - (int)a;
    printf("Fractional part of %f is %f", a, out);
    return 0;
}