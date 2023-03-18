#include<stdio.h>

    int main(){
    int year;
    scanf("%d", &year);
    for(int i = 1; i<=year; i++){
        if(i%4==0){
            if(i%100==0){
                if(i%400==0){
                    printf("%d ", i);
                }
            }
            else{
                printf("%d ", i);
            }
        }
    }

    return 0;
}