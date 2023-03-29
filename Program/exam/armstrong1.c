#include<stdio.h>
#include<math.h>
    int main(){
    int num, temp, sum = 0, n = 0, rem;
    scanf("%d", &num);
    temp = num;
    while(num!=0){
        num = num/10;
        n++;
    }
    num = temp;
    for(int i = 1; i<=n; i++){
        rem = num%10;
        sum = sum + pow(rem, n);
        num = num/10;
    }
    if(sum == temp){
        printf("%d is an Armstrong number.", temp);
    }
    else{
        printf("%d is not an Armstrong number.", temp);
    }
    return 0;
}