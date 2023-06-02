#include<stdio.h>

    int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int arr_out[n];
    for(int i = 0; i<n; i++){
        arr_out[i] = arr[i];
    }
    for(int i = 0; i<5; i++){
        printf("%d ",arr_out[i]);
    }
    return 0;
}