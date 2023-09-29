#include<stdio.h>

    int main(){
    for(int i = 0; i<=5; i++){
        static int num = 2;
        for(int j = 0; j<=5; j++){
            printf("%d ", num);
            num++;
        }
    }
    return 0;
}