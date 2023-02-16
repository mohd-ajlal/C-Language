// Wap in C to enter two numbers and print their sum.

#include<stdio.h>

    int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    printf("Sum of %d and %d is %d", num1, num2, num1+num2);
    return 0;
}