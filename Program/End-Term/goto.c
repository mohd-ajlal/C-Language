#include<stdio.h>

    int main(){
    int num = 5, i =1;
    Table:
        printf("%d * %d = %d\n", num , i , num*i);
        i++;
    if(i<=10)
        goto Table;
    else
        printf("Table of %d is printed\n", num);
    return 0;
}