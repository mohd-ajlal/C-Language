// Insertion of a element in a array

#include<stdio.h>

    int main(){
    int a[5] = {1,2,4,5};
    int element = 3;
    int k = 2;
    int i;
    int arr[5];
    for(i = 0; i<5; i++){
                if(i<k){
            arr[i] = a[i];
        }
        else if(i == k){
            arr[i] = element;
        }
        else{
            arr[i] = a[i-1];
        }
    }
    
    for(i = 0; i<5; i++){
        printf("%d ", arr[i]);
    }
        return 0;
}