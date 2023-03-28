#include<stdio.h>

    int main(){
    int num1 = 0, num2 = 1, num3, i, n;

    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci Series: %d %d ", num1, num2);
    for(i = 0; i<n-2; i++){
        num3 = num1 + num2;
        printf("%d ", num3);
        num1= num2;
        num2 = num3;
    }
    return 0;
}