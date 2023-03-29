#include<stdio.h>

    int main(){
    int num;
    scanf("%d", &num);
    switch (num%2)
    {
    case 0:
        printf("Even");
        break;
    
    default:
        printf("Odd");
        break;
    }
    return 0;
}