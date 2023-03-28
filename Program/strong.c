// Strong number
// 145 = 1! + 4! + 5!

#include<stdio.h>

    int main(){
    int n, i, j, k, sum = 0, fact = 1;
    scanf("%d", &n);
    i = n;
    while(i > 0){
        j = i % 10;
        k = j;
        while(k > 0){
            fact = fact * k;
            k--;
        }
        sum = sum + fact;
        fact = 1;
        i = i / 10;
    }
    if(sum == n){
        printf("Strong number");
    }
    else{
        printf("Not a strong number");
    }
    
    return 0;
}