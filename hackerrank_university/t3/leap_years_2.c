// This program will read value of N and print all Leap Years from 1 to N years. There are two conditions for leap year:

//     If year is divisible by 400 ( for Century years),
//     If year is divisible by 4 and must not be divisible by 100 (for Non Century years).

// Input Format

//     Take an integer year from the user.

// Constraints

//     year>=1 && year<=10000

// Output Format

//     It should print all the leap years between 1 to year.

// Sample Input 0

// 20

// Sample Output 0

// 4 8 12 16 20

#include<stdio.h>

    int main(){
    int N, i;
    scanf("%d", &N);
    for(i=1; i<=N; i++){
        if(i%400==0){
            printf("%d ", i);
        }
        else if(i%4==0 && i%100!=0){
            printf("%d ", i);
        }
        
        
    }
    return 0;
}