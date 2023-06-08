#include<stdio.h>

    int main(){
    int num, odd = 0, even = 0;
    scanf("%d", &num);
    int temp;
    while(num!=0){
        temp = num % 10;
        if(temp % 2 == 0){
            even += temp;
        }
        else{
            odd += temp;
        }
        num = num/10;
    }
    printf("%d", odd-even);
    return 0;
}