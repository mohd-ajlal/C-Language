// You are given a number N and Q queries. You have to find the result after performing Q operations. Each query contains an operator C and number X. You have to perform given operation on result of previous query with given number. The operators can be +-/*%&^|

// Input Format

// First Line contains a number N and Number of queries Q. Next Q lines contains an operator C and number X
// Sample Input 0

// 5 5
// / 49
// ^ 42
// & 48
// % 24
// * 36

// Sample Output 0

// 288



#include<stdio.h>

    int main(){
    int N, Q;
    scanf("%d %d",&N, &Q);
    int result = N;
    for(int i=0; i<Q; i++){
        char C;
        int X;
        scanf(" %c %d",&C, &X);
        switch(C){
            case '+':
                result = result + X;
                break;
            case '-':
                result = result - X;
                break;
            case '*':
                result = result * X;
                break;
            case '/':
                result = result / X;
                break;
            case '%':
                result = result % X;
                break;
            case '&':
                result = result & X;
                break;
            case '^':
                result = result ^ X;
                break;
            case '|':
                result = result | X;
                break;
        }
    }
    printf("%d",result);
    return 0;
}