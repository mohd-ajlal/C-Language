#include<stdio.h>

    int main(){
    int n;
    scanf("%d", &n);
    int arr[n], i;
    for(i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int max = arr[0], count = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]>=max){
            max = arr[i];
        }
    }
    for(int i = 0; i<n; i++){
        if(arr[i]==max){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}