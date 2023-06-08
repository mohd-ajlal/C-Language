#include<stdio.h>

    int main(){
    int *p; //   pointer
    *(int*)p = 5;
    printf("%d",p);
    return 0;
}