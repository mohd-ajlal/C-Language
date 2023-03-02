#include<stdio.h>

    int main(){
    int i, j;
    int num;
    scanf("%d",&num);
    for(i = 1; i<=num; i++){
        for(j = 1; j <= num-i+1 ; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}