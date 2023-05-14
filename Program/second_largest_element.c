// to find second largest element in an array

#include<stdio.h>

    int main(){
    int a[5] = {1,2,3,4,5};
    int m = a[0];
    int n = a[0];
    for(int i = 0; i < 5; i++){
        if(a[i] > m){
            m = a[i];
        }
    }
    for(int i = 0; i < 5; i++){
        if(a[i] > n && a[i] < m){
            n = a[i];
        }
    }
    printf("%d",n);
    return 0;
}