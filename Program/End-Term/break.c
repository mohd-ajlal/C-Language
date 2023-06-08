#include<stdio.h>

    int main(){
    int n = 10;
    for(int i = 0; i<n; i++){
        printf("%d ",n);
        if(i==5){
            break;
        }
    }
    return 0;
}