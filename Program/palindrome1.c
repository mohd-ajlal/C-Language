#include<stdio.h>

    int main(){
    int num, temp,sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(num!=0){
        rem = num%10;
        sum = sum * 10 + rem;
        num = num/10;
    }
    if(temp==sum){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}