#include<stdio.h>

    int main(){
    int arr[5];
    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    int mul = 1;
    float avg;
    for(int i=0; i<5; i++){
       mul = mul * arr[i];
    }
        printf("Multiply = %d", mul);
    return 0;
}