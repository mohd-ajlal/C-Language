// You are given time = 2 Years. You have to take Principal Amount P and rate R from user and calculate and print compound interest.

// Input Format

// First line contains P Second line contains R

// Constraints

// 0 < P,R < 100000

// Output Format

// A number representing compound interest rounding upto 2 decimal places.

// Sample Input 0

// 10000
// 2

// Sample Output 0

// 404.00

#include<stdio.h>

    int main(){
    float P, R, out;
    scanf("%f", &P);
    scanf("%f", &R);
    out = P * (1 + R/100) * (1 + R/100) - P;
    printf("%.2f", out);
    return 0;
}