#include<stdio.h>

    int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int i = 1;
    Table:
          printf("%d * %d = %d\n", num, i, num*i);
          i++;
    if(i<=10){
        goto Table;
        }
    return 0;
}