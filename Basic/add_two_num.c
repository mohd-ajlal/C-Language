#include<stdio.h>

    int main(){
    int a, b, sum;
    printf("Enter two numbers seperated with space: ");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("%d", sum);
    return 0;
}