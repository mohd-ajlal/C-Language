// You want some loan and a bank is ready to give you loan on simple interest. It is given that when you will return the amount, you will return amount which is twice of principal amount. Bank has given you rate R . You have to find the time after which you will be returning the total amount.

// Input Format

// First line contains rate R.

// Constraints

// 0 < |P,R| < 1000000

// Output Format

// Single floating point number rounding upto 2 decimal places representing the time T.

// Sample Input 0

// 10

// Sample Output 0

// 10.00

#include<stdio.h>

    int main(){
    float R, out;
    scanf("%f", &R);
    out = 100 / R;
    printf("%.2f", out);
    return 0;
}