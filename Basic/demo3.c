#include<stdio.h>

    int main(){
    int a,b1,b2, out, c;
    a = 2;
    c = a;
    b1 = a++;
    b2 = ++a;
    out = c + b1 + b2;
    printf("%d", out); 
    return 0;
}