#include<stdio.h>

    int main(){
    int num, i,j;
    printf("Enter no. of rows: ");
    scanf("%d",&num);
    for(i=0; i<num; i++){
        for(j=0; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}