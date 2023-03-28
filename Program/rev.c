#include<stdio.h>

    int main(){
    int num, sum= 0, temp, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(num!=0){
        rem = num%10;
        sum = sum * 10 + rem;
        num = num/10;
    }
    printf("Reverse of %d is %d", temp, sum);
    return 0;
}