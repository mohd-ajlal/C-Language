#include<stdio.h>

    int main(){
    int C, N, D;
    scanf("%d %d %d", &C, &N, &D);
    int out = ((D*N) +C)-D;
    printf("%d", out);
    return 0;
}