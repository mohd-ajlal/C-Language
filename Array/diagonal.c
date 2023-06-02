#include<stdio.h>

    int main(){
    int arr[3][3];
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            if(i==j){
                printf("%d\n", arr[i][j]);
                for(int k = 0; k<=i; k++){
                    printf("  ");
                }
            }
        }
    }
    return 0;
}