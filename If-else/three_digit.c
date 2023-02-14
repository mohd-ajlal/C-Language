// take positive integer input and tell if it is a three digit number or not.

#include<stdio.h>

    int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a>99 && a<1000){
        printf("%d is a three digit number", a);
    }
    else{
        printf("%d is not a three digit number", a);
    }
    return 0;
}