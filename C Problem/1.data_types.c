// Wap in c to perform input and output of all basic data types.

#include<stdio.h>

    int main(){
    int num;
    char alpha;
    float fnum;
    double dnum;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Enter a character: ");
    scanf(" %c", &alpha);
    printf("Enter a float: ");
    scanf("%f", &fnum);
    printf("Enter a double: ");
    scanf("%lf", &dnum);
    printf("Integer: %d", num);
    printf("Double: %f", dnum);
    printf("Float: %f", fnum);
    printf("Character: %c", alpha);
    return 0;
}

