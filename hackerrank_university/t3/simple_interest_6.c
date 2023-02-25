#include<stdio.h>

    int main(){
    int P, T, R, out;
    scanf("%d", &P);
    scanf("%d", &T);
    scanf("%d", &R);
    out = ((P*T*R)/100)+P;
    printf("%d", out);
    return 0;
}