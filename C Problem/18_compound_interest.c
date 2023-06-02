
#include<stdio.h>
#include<math.h>
    int main(){
    int p, t, r, ci;
    printf("Enter principle, time and rate: ");
    scanf("%d%d%d", &p, &t, &r);
    ci = p*(pow((1+r/100), t));
    printf("Compound interest is: %d", ci);
    return 0;
}