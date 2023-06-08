#include<stdio.h>

    int main(){
    int a = 10;
    int *p = &a;
    int **q = &p;
    printf("%d", &p);
    printf("\n%d", &q);
    return 0;
}

