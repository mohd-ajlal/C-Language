#include<stdio.h>

    int main(){
    int arr[5];
    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    int out[5];
    out[0] = arr[0];
    int sum = arr[0];
    for(int i = 1; i<5; i++){
        sum = sum + arr[i];
        out[i] = sum;
    }
    for(int i = 0; i<5; i++){
        printf("%d ",out[i]);
    }
    return 0;
}