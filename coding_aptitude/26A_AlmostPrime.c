// A. Almost Prime
// time limit per test
// 2 seconds
// memory limit per test
// 256 megabytes
// input
// standard input
// output
// standard output

// A number is called almost prime if it has exactly two distinct prime divisors. For example, numbers 6, 18, 24 are almost prime, while 4, 8, 9, 42 are not. Find the amount of almost prime numbers which are between 1 and n, inclusive.
// Input

// Input contains one integer number n (1 ≤ n ≤ 3000).
// Output

// Output the amount of almost prime numbers between 1 and n, inclusive.

// Examples
// Input

// 10

// Output

// 2

// Input

// 21

// Output
// 8

#include<stdio.h>
#include <limits.h>

    int main(){
    int num;
    scanf("%d", &num);
    int count = 0;
    for(int i = 1; i <= num; i++){
        int count1 = 0;
        int temp;
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                if(count1 == 1){
                    if(j%temp != 0){
                        count1++;
                    }
                }else{
                    count1++;
                }
                // count1++;
                temp = j;

            }
        }
        if(count1 == 2){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}