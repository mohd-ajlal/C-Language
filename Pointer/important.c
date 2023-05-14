#include<stdio.h>

    int main(){
    int a = 10; 
    int *p = &a;
    p = p + 1;
    printf("%d", *p);
    return 0;
}