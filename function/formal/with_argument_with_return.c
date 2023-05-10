#include<stdio.h>

    int sum(int a, int b);
    int main(){
    printf("%d", sum(1, 2));
    return 0;
}

int sum(int a, int b){
    int c = a + b;
    return c;
}
