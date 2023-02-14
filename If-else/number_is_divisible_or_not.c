#include<stdio.h>

    int main(){
    int a, b;
    printf("Enter two numbers (a>b) and in order of a/b: "); // a>b
    scanf("%d%d", &a, &b);
    if(a%b==0){
        printf("%d is divisible by %d", a, b);
    }
    else{
        printf("%d is not divisible by %d", a, b);
    }
    return 0;
}