#include<stdio.h>

    int main(){
    int a = 10;
    int *p = &a;
    // ++p;
    printf("%d", p);
    p++;
    printf("\n%d", p);
    return 0;
}