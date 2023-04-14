// You are given a number N. Find whether it is a perfect square or not?

// Input Format

// First line contains T, number of testcases. For each testcase, single line contains a number N.

// Constraints

// 0 < |N| < 1000000000000

// Output Format

// For each testcase, print Perfect Square or Not a Perfect Square.

// Sample Input 0

// 24
// 833476900
// 5862505489
// 1660562500
// 103271
// 2526268644
// 154447
// 8988004
// 9314373121
// 129469
// 150519
// 558896881
// 109873
// 105387
// 7256313856
// 86799
// 140883
// 110287
// 5008534441
// 884527081
// 141559
// 137495
// 74649
// 5887799824
// 791071876

// Sample Output 0

// Perfect Square
// Perfect Square
// Perfect Square
// Not a Perfect Square
// Perfect Square
// Not a Perfect Square
// Perfect Square
// Perfect Square
// Not a Perfect Square
// Not a Perfect Square
// Perfect Square
// Not a Perfect Square
// Not a Perfect Square
// Perfect Square
// Not a Perfect Square
// Not a Perfect Square
// Not a Perfect Square
// Perfect Square
// Perfect Square
// Not a Perfect Square
// Not a Perfect Square
// Not a Perfect Square
// Perfect Square
// Perfect Square

#include<stdio.h>

    int main(){
    int T;
    scanf("%d",&T);
    for(int i=0; i<T; i++){
        long long int N;
        scanf("%lld",&N);
        int flag = 0;
        for(long long int j=1; j*j<=N; j++){
            if(j*j == N){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            printf("Perfect Square\n");
        }
        else{
            printf("Not a Perfect Square\n");
        }
    }
    return 0;
}