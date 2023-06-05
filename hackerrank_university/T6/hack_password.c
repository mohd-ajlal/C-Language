#include<stdio.h>

    int main(){
    int t;
    scanf("%d",&t);
    for(int i = 0; i<t; i++){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int j = 0; j<n; j++){
            scanf("%d",&arr[j]);
        }
        int out = 0;
        for(int j = 0; j<n-1; j++){
            for(int k = j+1; k<n; k++){
                if(arr[j] == arr[k]){
                    out = 1;
                }
            }
        }
        if(out==0){
            printf("correct\n");
        }
        else{
            printf("incorrect\n");
        }
    }
    return 0;
}