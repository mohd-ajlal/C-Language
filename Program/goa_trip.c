#include<stdio.h>

    int main(){
    int N, S, C, H, L, T, a, days, b;
    printf("N Days Left for exam: ");
    scanf("%d", &N);
    printf("Total Subject: ");
    scanf("%d", &S);
    printf("Chapter in Each Subject: ");
    scanf("%d", &C);
    printf("Each Chapter Hours to prepare: ");
    scanf("%d", &H);
    printf("Goa Trip Days: ");
    scanf("%d", &L);
    printf("Hours to study daily: ");
    scanf("%d", &T);

    a = S * C * H;

    days = a/T;

    b = L + days;

    if (N>b)
    {
        printf("Goa Jainge");
    }
    else
    printf("Number Lainge");
    
    return 0;
}