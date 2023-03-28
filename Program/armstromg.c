#include<stdio.h>
#include<math.h>

    int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    int sum = 0;
    int po = 0;
    while(temp!=0){
        temp = temp/10;
        po = po + 1;
    }
    temp = num;
    while(temp!=0){
        int last_digit = temp%10;
        sum = sum + pow(last_digit, po);
        temp = temp/10;
    }
    if(sum==num){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }
    return 0;
}