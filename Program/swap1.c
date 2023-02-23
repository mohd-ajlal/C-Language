#include<stdio.h>

    int main(){
    int a, b, temp;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping a = %d and b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping a = %d and b = %d", a, b);
    return 0;
}