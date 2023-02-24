// You have a uncle who daily gives you D chocolates upto N days. Also you have C chocolates already but your parents allow only to eat one chocolate per day. Calculate the total chocolates at the end of N days.

// Input Format

// First line contains C Second line contains N Third line contains D

// Constraints

// 0 < C,D,N < 1000000

// Output Format

// Single Integer representing the total chocolates at the end of N days.

// Sample Input 0

// 5
// 5
// 5

// Sample Output 0

// 25

#include<stdio.h>

    int main(){
    int D, N, C, out;
    scanf("%d", &C);
    scanf("%d", &N);
    scanf("%d", &D);
    out= (D*N) + (C-N);
    printf("%d", out);

    return 0;
}