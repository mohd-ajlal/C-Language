#include<stdio.h>

    int main(){
    int num, i =1;
    printf("Enter a number: ");
    scanf("%d", &num);
    Table: printf("%d x %d = %d\n", num, i, num*i);
    i++;
    if(i<=10){
        goto Table;
    }
    return 0;
}