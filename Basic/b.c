// take a integer input a and b, a>b and find the reminder when a is divided by b.

#include<stdio.h>

    int main(){
    int a, b, out;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    out = a % b;
    printf("%d %% %d = %d", a, b, out);
    return 0;
}