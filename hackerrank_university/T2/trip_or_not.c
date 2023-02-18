#include<stdio.h>

    int main(){
    int N, S, C, H, L, T, a, days, b;
    scanf("%d %d %d %d %d %d", &N, &S, &C, &H, &L, &T);
    a = S * C * H;
    days = a/T;
    b = L + days;
    if (N>=b)
    {
        printf("Goa Jaayenge");
    }
    else{
        printf("Padhai Karenge");
    }
    
    return 0;
}