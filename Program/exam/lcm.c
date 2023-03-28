#include<stdio.h>

    int main(){
    int num1, num2, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    max = (num1>num2)?num2:num1;
    for(int i = 1; i>=1; i++){
        if(max % num1 == 0 && max % num2 == 0){
            printf("LCM of %d and %d is %d", num1, num2, max);
            break;
        }
        max++;
    }
    return 0;
}