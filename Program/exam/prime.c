#include<stdio.h>

    int main(){
    int num, i, sum = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i = 1; i<=num/2; i++){
        if(num%i == 0){
            sum = sum + 1;
        }
    }
    if(sum == 2){
        printf("%d is a prime number.", num);
    }
    else{
        printf("%d is not a prime number.", num);
    }

    return 0;
}