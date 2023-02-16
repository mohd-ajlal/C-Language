// WAP in C to enter temperature in celcius and convert it into farenheit.

#include<stdio.h>

    int main(){
    float cel;
    printf("Enter temperature in celcius: ");
    scanf("%f", &cel);
    printf("Temperature in farenheit is: %f", (cel*9/5)+32);
    return 0;
}