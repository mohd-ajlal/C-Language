#include<stdio.h>

    int main(){
    int a, b,c, out;
    printf("Enter three no.: ");
    scanf("%d%d%d", &a, &b, &c);
    out = a>b && a>c;
    printf("%d\n", out);
    printf("%d\n", a>b || a>c);
    printf("%d", !(a&&b) );

    return 0;
}