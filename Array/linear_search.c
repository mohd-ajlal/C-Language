#include<stdio.h>

    int main(){
    int arr[5] = {1,2,3,4,5};
    int search = 4;
    for(int  i = 0; i<5; i++){
        if(i == search){
            printf("%d", i);
            break;
        }
    }
    return 0;
}