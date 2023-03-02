#include<stdio.h>

    int main(){
    int i, j;
    int num;
    printf("Enter number of rows: ");
    scanf("%d",&num);
    for(i = 1; i<=num; i++){
        for(j = 1; j <= i; j++){
            int A = 65;
            printf("%c ", A);
            A++;
        }
        printf("\n");
    }
    return 0;
}