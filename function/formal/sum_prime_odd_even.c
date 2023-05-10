#include<stdio.h>

    int sum(int a, int b);
    int prime(int a);
    int o_e(int a);
    int main(){
        int a, b;
        printf("Enter the value of a: ");
        scanf("%d", &a);
        printf("Enter the value of b: ");
        scanf("%d", &b);
        sum(a, b);
        prime(a);
        o_e(a);

    return 0;
}

int sum(int a, int b){
    int c = a + b;
    printf("%d\n", c);
    return c;
}

int prime(int a){
    int i, flag = 0;
    for(i = 2; i <= a/2; ++i){
        if(a % i == 0){
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("%d is a prime number.\n", a);
    else
        printf("%d is not a prime number.\n", a);
    return 0;
}

int o_e(int a){
    if(a % 2 == 0)
        printf("%d is even.\n", a);
    else
        printf("%d is odd.\n", a);
    return 0;
}