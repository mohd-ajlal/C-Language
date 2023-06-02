#include<stdio.h>

    int main(){
    int arr[5] = {1,2,3,4,5};
    int out[5];
    for(int i = 4; i>=0; i--){
        out[i] = arr[i];
    }
    printf("\n");
    for(int i = 0; i<5; i++){
        printf("%d ", out[i]);
    }
    return 0;
}