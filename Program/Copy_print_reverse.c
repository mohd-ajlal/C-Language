// to copy an array from another array and print them in reverse order

#include<stdio.h>
    int main(){
    int a[5] = {1,2,3,4,5};
    int b[5];
    for(int i = 0; i < 5; i++){
        b[i] = a[i];
    }
    for(int i = 4; i >= 0; i--){
        printf("%d ",b[i]);
    }
    return 0;
}