#include<stdio.h>

    int main(){
    int a = 10, b = 10;
    int *p, *q;
    p = &a, q = &b;
    *q = *p;
    printf("p = %d, q =%d\n",*p, *q);
    return 0;
}