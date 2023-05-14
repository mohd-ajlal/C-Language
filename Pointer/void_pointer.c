// important 

#include<stdio.h>

    int main(){
    int a = 10;
    int *p;
    float *q;
    char *r;
    void *T = &a; // we can store any type of data
    // printf("%d", *T); error
    printf("%d", *(int *)T);
    return 0;
}