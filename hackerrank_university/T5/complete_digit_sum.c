// Gagan is given a task to find the sum of digits of a number. Help Gagan.

// You are given a Number N. Find the Digit sum of N in single digit. That means you have to find the sum of digits of your answer until it comes in one digit.

// Input Format

// Single Line containing the value of N.

// Constraints

// 0 < N < 1000000

// Output Format

// Single 1 digit number founded atlast as sum.

// Sample Input 0

// 12345

// Sample Output 0

// 6

// Explanation 0

// 12345=>(1+2+3+4+5)=>15=>(1+5)=>6.

#include<stdio.h>

    int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    while(n>0){
        sum = sum + n%10;
        n = n/10;
    }
    if(sum>9){
        int sum1 = 0;
        while(sum>0){
            sum1 = sum1 + sum%10;
            sum = sum/10;
        }
        printf("%d",sum1);
    }
    else{
        printf("%d",sum);
    }
    
    return 0;
}