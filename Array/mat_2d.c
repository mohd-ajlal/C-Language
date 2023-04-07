#include<stdio.h>

    int main(){
    int x, y,  arr[x][y];
    printf("Enter no. of rows: ");
    scanf("%d", &x);
    printf("Enter no of columns: ");
    scanf("%d", &y);
    for(int i = 0; i<x; i++){
        for(int j = 0; j<y; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int arr1[x][y];
    for(int i = 0; i<x; i++){
        for(int j = 0; j<y; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    int mat[x][y];
    for(int i = 0; i<x; i++){
        for(int j = 0; j<y; j++){
            mat[i][j] = arr[i][j] + arr1[i][j];
        }
    }
    for(int i = 0; i<x; i++){
        for(int j = 0; j<y; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}