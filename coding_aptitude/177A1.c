#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int matrix[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int mid = (n-1)/2;
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=matrix[i][j];
            }
            else if(i+j==n-1){
                sum+=matrix[i][j];
            }
            else if(i==mid || j==mid){
                sum+=matrix[i][j];
            }
            
        }
        
    }

    printf("%d\n",sum);
    return 0;
}