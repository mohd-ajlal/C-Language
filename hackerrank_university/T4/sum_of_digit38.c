#include<stdio.h>

    int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
            int num, sum=0, rem;
    scanf("%d", &num);
    while(num!=0){
        rem = num%10;
        sum += rem;
        num = num/10;
    }
    printf("%d\n", sum);
    }
    return 0;
}