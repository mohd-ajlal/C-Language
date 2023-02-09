#include<stdio.h>

    int main(){
    int a, b, sum, sub, mul, div, mod;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = a % b;
    printf("%d+%d = %d\n", a, b, sum);
    printf("%d-%d = %d\n", a, b, sub);
    printf("%d*%d = %d\n", a, b, mul);
    printf("%d/%d = %d\n", a, b, div);
    printf("%d ^ %d = %d\n", a, b, mod);
    // printf("%d +%d = %d\n", a, b, sum);
    return 0;
}