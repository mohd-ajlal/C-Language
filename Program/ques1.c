// Take integer as input and print half of the number upto 2 decimal places.

#include<stdio.h>

    int main(){
    int a;
    float out;
    printf("Enter a integer: ");
    scanf("%d", &a);
    out = a / 2.0;
    printf("Half of %d is %.2f", a, out);
    return 0;
}