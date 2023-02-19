#include<stdio.h>

    int main(){
    int A, B, C, T;
    scanf("%d", &T);
    while(T--){
        scanf("%d %d %d", &A, &B, &C);
        if(A+B+C == 180){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}