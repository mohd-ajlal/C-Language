#include<stdio.h>

    int main(){
    int a, b , out;
    printf("Enter two no. ");
    scanf("%d%d",&a, &b);
    out = a>b ? a:b;
    printf("%d", out);
    return 0;
}