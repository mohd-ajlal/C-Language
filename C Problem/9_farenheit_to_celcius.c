// wap in c to enter temperature in farenheit and print its equivalent in celcius.

#include<stdio.h>

    int main(){
    float fer;
    printf("Enter temperature in farenheit: ");
    scanf("%f", &fer);
    printf("Temperature in Celcius is: %f", (fer-32)*5/9);
    return 0;
}
