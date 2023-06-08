#include<stdio.h>
    int main(){
    int num, even_sum=0, odd_sum=0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0){
        rem = num%10;
        num = num/10;
        if(rem % 2 == 0){
            even_sum += rem;
        }
        else{
            odd_sum += rem;
        }
    }
    int out;
    if(even_sum > odd_sum){
        out = even_sum - odd_sum;
    }
    else{
        out = odd_sum - even_sum;
    }
    printf("%d",out);
    return 0;
}