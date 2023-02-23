// 123 = 1+2+3 = 6

#include<stdio.h>

    int main(){
    int num, sum=0;
    printf("Enter the value of num: ");
    scanf("%d", &num);
    while(num>0){
        sum = sum + num%10;
        num = num/10;
    }
   printf("Sum is %d", sum);
    return 0;
}