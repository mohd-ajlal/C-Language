// to copy an array from another array and print them in reverse order
#include<stdio.h>

    int main(){
    int arr[5] = {1,2,3,4,5};
    int b[5];
    int j = 4;
    for(int i = 0; i <= 4; i++){
        b[i] = arr[j--];
    }
    for(int i = 0; i <= 4; i++){
        printf("%d ",b[i]);
    }

    return 0;
}