#include<stdio.h>

    int main(){
    int x, y, arr[x][y], out[y][x];
        printf("Enter no. of rows of matrix 1: ");
    scanf("%d", &x);
    printf("Enter no of columns of matrix 2: ");
    scanf("%d", &y);
    for(int i = 0; i<x; i++){
        for(int j = 0; j<y; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i<y; i++){
        for(int j = 0; j<x; j++){
            out[i][j] = arr[j][i];
        }
    }
    for(int i = 0; i<y; i++){
        for(int j = 0; j<x; j++){
            printf("%d", &out[i][j]);
        }
    }

    return 0;
}