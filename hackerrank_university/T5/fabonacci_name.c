// Program to print fibonacci series.

// In this program, we will read value of N (N for number of terms) and then print fibonacci series till N terms. Fibonacii series: Is a series of number in which each number is the sum of preceding two numbers.

// 0 1 1 2 3 5 8 ...

// Input Format

//     Take an integer n from the user.

// Constraints

//     n>=1 and n<=1000000

// Output Format

//     It should print the n terms of fibonacci series.

// Sample Input 0

// 10

// Sample Output 0

// 0 1 1 2 3 5 8 13 21 34

#include<stdio.h>

    int main(){
    int n;
    scanf("%d", &n);
    int a = 0, b = 1, c;
    printf("%d ", a);
    for(int i=1; i<n; i++){
        printf("%d ", b);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}