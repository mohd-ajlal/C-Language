#include<stdio.h>

    int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int i;
    for(i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for(int i = 0; i<n; i++){
        int out = 0;
        for(int j = 0; j<n; j++){
            if(arr[i]==arr[j]){
                out++;
            }
        }
        if(out!=1){
            printf("Not correct");
            break;
        }
        count++;
    }
    if(count==n){
        printf("correct");
    }
    return 0;
}