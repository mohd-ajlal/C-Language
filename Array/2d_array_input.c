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
    for(int i = 0; i<x; i++){
        for(int j = 0; j<y; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}