// given no. is greater than 5 or not

#include<stdio.h>

    int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a>5){
        printf("%d is greater than 5", a);
    }
    else{
        printf("%d is not greater than 5", a);
    }
    return 0;
}

// logical operators
// && - and
// || - or
// ! - not
