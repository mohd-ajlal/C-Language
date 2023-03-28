#include<stdio.h>

    int main(){
    int num, sum = 0;
    scanf("%d", &num);
    int temp = num;
    int rem;
    while(num!=0){
        rem = num%10;
        int out = 1;
        for(int i = 1; i<=rem; i++){
            out = out * i;
        }
        sum = sum + out;
        num = num/10;
    }
    if(temp==sum){
        printf("Strong");
    }
    else{
        printf("Not Strong");
    }
    return 0;
}