#include<stdio.h>

    void sum(int a, int b);
    int main(){
    sum(1, 2);
    return 0;
}

void sum(int a, int b){
    int c = a + b;
    printf("%d", c);
}