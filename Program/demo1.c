#include<stdio.h>

    int main(){
    int c = 0, d = 15, e = 100, a, b;
    a = c>1?d>1||e>1?10:20:30;
    printf("%d\n", a);
    c = c!=1?d>1||e>1?10:20:30;
    printf("%d", c);
    return 0;
}