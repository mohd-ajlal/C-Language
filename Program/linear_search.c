#include<stdio.h>

    int main(){
    int a[5] = {1,2,3,4,5};
    int search = 3;
    int i;
    for(i = 0; i<5; i++){
        if(a[i] == search){
            printf("Found at %d", i);
            break;
        }
    }
    return 0;
}