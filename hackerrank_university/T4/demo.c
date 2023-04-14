#include<stdio.h>
#include<stdlib.h>
#include<string.h>
    int main(){
    

    int n, size;
    scanf("%d", &n);
    if(n>0){
        scanf("%d", &size);
    }
    for(int i = 0; i < n; i++){
        int *arr;
         arr = malloc(size * sizeof(int));
    for(int j=0; j < size; j++){
        scanf("%d", &arr[j]);
    }
    int min = arr[0], max = arr[0];
    if(size>0){
    for(int j = 0; j < size-1; j++){
        if(min <= arr[j+1]){
            min = min; 
        }
        else{
            min = arr[j+1];
        }
        if(max >= arr[j+1]){
            max = max;
        }
        else{
            max = arr[j+1];
        }
    }
    printf("Min=%d Max=%d\n", min, max);
    }
    }

    return 0;
}