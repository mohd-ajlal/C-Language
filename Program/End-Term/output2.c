#include<stdio.h>

    int main(){
    int i = 8, *p, **q, ***r;
    p = &i;
    q = &p;
    r = &q;
    printf("%d %d %d %d", i, *p, **q, ***r);
    return 0;
}