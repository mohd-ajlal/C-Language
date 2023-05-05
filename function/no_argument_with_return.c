#include<stdio.h>
    
    int sum(void);
    int main(){
    int out = sum();
    return 0;
}

int sum(){
    int a = 1, b = 2;
    int c = a + b;
    printf("%d", c);
    return c;
}