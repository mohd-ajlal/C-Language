#include<stdio.h>

    int main(){
    int a = 1;
    int b = 1;
    int c = ++a||b++;
    int d = b--&&--a;
    printf("%d %d %d %d", d, c, b, a);
    return 0;
}