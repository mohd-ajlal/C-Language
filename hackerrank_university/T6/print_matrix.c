#include<stdio.h>

    int main(){
    int m, n;
    scanf("%d %d",&m,&n);
    int a[m][n];
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}