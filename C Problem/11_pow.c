#include<math.h>
#include<stdio.h>

    int main(){
    int base, exp, out;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    out = pow(base, exp);
    printf("Power of %d^%d is: %d", base, exp, out);
    return 0;
}