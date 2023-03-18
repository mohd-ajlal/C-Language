#include<stdio.h>

    int main(){
    int i, j;
    int num;
    scanf("%d",&num);
    for(i=0; i<num; i++){
        for(j = 0; j<4-i; j++){
            printf(" ");
        }
        for(j = 0; j<i+1; j++){
            printf("*");
        }
        for(j = 0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}