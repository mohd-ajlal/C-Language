#include<stdio.h>

    int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int rev = 0;
    int temp = num;
    while(temp!=0){
        int last_digit = temp%10;
        rev = rev*10 + last_digit;
        temp = temp/10;
    }
    if(rev==num){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}