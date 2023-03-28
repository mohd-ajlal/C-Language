#include<stdio.h>

    int main(){
    int num, n1 = 1;
    scanf("%d", &num);
    for(int i = 1; i<=num; i++){
        for(int j = 1; j<=i; j++){
            printf("%d ", n1);
            n1 = n1 + 1;
        }
        printf("\n");
    }
    return 0;
}