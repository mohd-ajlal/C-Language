#include<stdio.h>

    int main(){
    int num;
    scanf("%d", &num);
    for(int i = 1; i<=num; i++){
        if(i%2!=0){
            printf("%d ", i);
        }
    }
    return 0;
}