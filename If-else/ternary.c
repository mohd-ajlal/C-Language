#include <stdio.h>

int main()
{
    int n;
    printf("Enter a no.: ");
    scanf("%d", &n);

    // ternary operator
    // exp1? exp2: exp3
    // if exp1 is true, then exp2 is evaluated and returned
    // else exp3 is evaluated and returned
    // if (n % 2 == 0) printf("Even");
    // else printf("Odd");
    (n % 2 == 0) ? printf("Even") : printf("Odd");    // ternary operator
    return 0;
}