#include<stdio.h>

    int main(){
    int m, n;
    scanf("%d %d",&m,&n);
    int mat[m][n];
    for(int i = 0; i<m; i++){
        for(int j= 0 ; j<n; j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int sum = 0, product = 1;
    for(int i= 0; i<m;i++){
        for(int j = 0; j < n; j++){
            sum += mat[i][j];
            product *= mat[i][j];
        }
    }
    printf("%d %d",sum,product);
    return 0;
}