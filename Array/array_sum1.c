#include<stdio.h>

    int main(){
    int n;
    scanf("%d",&n);
    int arr1[n], arr2[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0; i<n; i++){
        scanf("%d",&arr2[i]);
    }
    int arr_out[n];
    for(int i=0; i<n; i++){
        arr_out[i]= arr1[i] + arr2[i];
    }
    for(int i=0; i<n; i++){
        printf("%d ",arr_out[i]);
    }
    return 0;
}