#include<stdio.h>

    int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a<0){
        printf("Absolute value of %d is %d", a, -a);
    }
    else{
        printf("Absolute value of %d is %d", a, a);
    }
    return 0;
}