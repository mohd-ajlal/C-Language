#include<stdio.h>

    int main(){
    int year;
    scanf("%d", &year);
    for(int i = 0; i < year; i++){
        if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}