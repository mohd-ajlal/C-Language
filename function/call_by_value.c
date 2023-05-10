#include<stdio.h>

    void sum(int, int);
    int main(){
    int a = 10, b = 20;
    sum(a, b);
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}

void sum(int a, int b){
    a = 70;
    b = 80;
    printf("%d\n", a);
    printf("%d\n", b);
}