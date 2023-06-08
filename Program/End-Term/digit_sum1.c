#include<stdio.h>

    int main(){
    int n;
    scanf("%d",&n);
    int sum = 0, rem;
    while(n/10!=0){
        sum = 0;
        while(n!=0){
            rem = n%10;
            sum+=rem;
            n = n/10;
        }
        n = sum;

    }
    printf("%d\n",sum);
    return 0;
}