#include<stdio.h>

    void sum(void);
    int main(){
    sum();
    return 0;
}

void sum(){
    int a = 1, b = 2;
    int c = a + b;
    printf("%d", c);
}