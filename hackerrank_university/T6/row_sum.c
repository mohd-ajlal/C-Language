#include<stdio.h>

    int main(){
    int m ,n;
    scanf("%d %d",&m,&n);
    int mat[m][n];
    int row_sum = 0;
    for(int i = 0; i<m; i++){
        for(int j= 0 ; j<n; j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i= 0; i<m;i++){
        for(int j = 0; j < n; j++){
            row_sum += mat[i][j];
        }
        printf("%d ",row_sum);
        row_sum = 0;
    }
    return 0;
}