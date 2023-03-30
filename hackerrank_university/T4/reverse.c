#include<stdio.h>

    int main(){
    int num, temp, rem, rev=0;
    scanf("%d", &num);
    temp = num;
    while(temp!=0){
        rem = temp%10;
        rev = rev*10 + rem;
        temp = temp/10;
    }
    printf("%d", rev);
    return 0;
}