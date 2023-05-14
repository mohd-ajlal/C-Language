// *p = single pointer
//  **p = double pointer

#include<stdio.h>

    int main(){
    int a = 10;
    int *p = &a;
    int **q = &p; // two level pointer can only store one level pointer
    // int ***r = &q; it is wrong : three level pointer can store two lever pointer
    int ***r = &q;
    printf("a = %d, p = %d, q = %d, r = %d\n", a, *p, **q, ***r);


    return 0;
}