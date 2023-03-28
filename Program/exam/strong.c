#include<stdio.h>

    int main(){
    int num, temp, rem, sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(num!=0){
        rem = num%10;
        int fact = 1;
        for(int i =1; i<=rem; i++){
            fact = fact * i;
        }
        sum = sum + fact;
        num = num/10;
    }
    if(sum == temp){
        printf("%d is a strong number.", temp);
    }
    else{
        printf("%d is not a strong number.", temp);
    }
    return 0;
}