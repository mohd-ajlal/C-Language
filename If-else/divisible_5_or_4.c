#include<stdio.h>

    int main(){
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    if (a%3==0 || a%5==0){
        if(a%3==0){
            printf("%d is divisible by 3", a);
        }
        if(a%5==0){
            printf("%d is divisible by 5", a);
        }
        // printf("%d is divisible by 3 or 5", a);
    }
    else{
        printf("%d is not divisible by 3 or 5 both", a);
    }
    return 0;
}