#include<stdio.h>

    int main(){
    int m ,n;
    scanf("%d %d",&m,&n);
    if(m==n){
        int mat[m][n];
        for(int i = 0; i<m; i++){
            for(int j= 0 ; j<n; j++){
                scanf("%d",&mat[i][j]);
            }
        }
        for(int i= 0; i<m;i++){
            for(int j = 0; j < n; j++){
                if(i==j){
                    printf("%d\n",mat[i][j]);
                    for(int k = 0; k <= (i*2)+1; k++){
                        printf(" ");
                    }
                }
            }
        }
    }
    else{
        printf("Not square matrix.");
    }
    return 0;
}