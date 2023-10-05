#include<stdio.h>
#define san 10
    int main(){
    #ifdef san
    #define san 20
    #endif
    #define san 50
    printf("%d", san);
    return 0;
}