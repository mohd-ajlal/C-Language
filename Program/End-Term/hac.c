#include<stdio.h>

    int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int count = 0, flag = 0, i, j;
    for(int i = 0; i<n; i++){
        flag = 0;
        for(int j = 0; j<n; j++){
            if(arr[i]==arr[j]){
                flag++;
                count++;
            }
            if(flag!=1){
            printf("NOT");
            break;
        }
        }

        
    }
    if(count==n){
        printf("YES");
    }
    return 0;
}