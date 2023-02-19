// You are given two integers A and B. Your friend have applied some operator on those integers and produced some result R. You have to find the operator. Note: 1. Operator can be one of the + - / * % only. 2. In case of division compare only quotient. 3. If operator is not commutative, you have to check every possible combination of operands with operator.

#include<stdio.h>

    int main(){
    int A, B, R;
    scanf("%d %d %d", &A, &B, &R);
    if(A+B == R){
        printf("+");
    }
    else if(A-B == R){
        printf("-");
    }
    else if(A*B == R){
        printf("*");
    }
    else if(A/B == R){
        printf("/");
    }
    else if(A%B == R){
        printf("%%");
    }
    else if(B-A == R){
        printf("-");
    }
    else if(B/A == R){
        printf("/");
    }
    else if(B%A == R){
        printf("%%");
    }
    // if(A+B == R) printf("+");
    // else if(A-B == R) printf("-");
    // else if(A*B == R) printf("*");
    // else if(A/B == R) printf("/");
    // else if(A%B == R) printf("%%");
    // else if(B-A == R) printf("-");
    // else if(B/A == R) printf("/");
    // else if(B%A == R) printf("%%");
    return 0;
}