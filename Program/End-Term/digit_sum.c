#include<stdio.h>

    int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int sum = 0, rem;
    while(num/10 != 0){
        sum = 0;
        while(num != 0){
            rem = num%10;
            sum += rem;
            num /= 10;
        }
        num = sum;
    }
    printf("%d", sum);
    return 0;
}