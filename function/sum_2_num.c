#include<stdio.h>
    int sum(int a, int b); // function declaration
    int main(){
    int a = 1, b = 2;
    int c = sum(a, b); // function call
    printf("%d", c);
    return 0;
}
    // function definition
    int sum(int a, int b){
        return a + b;
}