#include<stdio.h>

    int main(){
    int no;
    scanf("%d", &no);
    int arr[no];
    int sum=0;
    for(int i = 0; i<no; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int out = 0;
    for(int i = 0; i<no; i++){
        if((sum - arr[i])%2 == 0){
            out++;
        }
    }
    printf("%d", out);
    return 0;
}