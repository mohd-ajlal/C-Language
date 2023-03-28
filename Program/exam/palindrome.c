#include<stdio.h>

    int main(){
    int num, temp, rem, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(num!=0){
        rem = num %10;
        sum = sum *10 + rem;
        num = num/10;
    }
    if(sum == temp){
        printf("%d is a palindrome number.", temp);
    }
    else{
        printf("%d is not a palindrome number.", temp);
    }
    return 0;
}