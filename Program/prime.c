#include<stdio.h>

    int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int sum = 0;
    for(int i = 1; i<=num; i++){
        if(num%i==0){
            sum = sum + 1;
        }
    }
    if(sum==2){
        printf("Prime number");
    }
    else{
        printf("Not a prime number");
    }
    return 0;
}