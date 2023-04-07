#include<stdio.h>

    int main(){
    int arr1[4], arr2[4], arr[4];
    for(int i=0; i<4; i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0; i<4; i++){
        scanf("%d",&arr2[i]);
    }
    for(int i=0; i<4; i++){
        arr[i] = arr1[i]+arr2[i];
        // printf("%d ",arr[i]);
    }
    for(int i=0; i<4; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}