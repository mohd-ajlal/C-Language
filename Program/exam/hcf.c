#include<stdio.h>

    int main(){
    int num1, num2, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    max = (num1>num2)?num2:num1;
    for(int i =0; i>=0; i++){
        if(num1%max == 0 && num2%max == 0){
            printf("HCF of %d and %d is %d", num1, num2, max);
            break;
        }
        max--;
    }
    return 0;
}