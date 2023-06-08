#include<stdio.h>
#include<stdlib.h>
    int main(){
    int *p;
    int a = 5;
    p = &a;
    printf("%d ",p);
    free(p);
    printf("%d",p);
    return 0;
}