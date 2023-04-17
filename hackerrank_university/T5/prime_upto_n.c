// Program to print all prime numbers from 1 to N.

// Input Format

//     Take an integer N from the user.

// Constraints

//     N>=2 && N<=100000000

// Output Format

//     It should print all the prime numbers between 1 to N.

// Sample Input 0

// 10

// Sample Output 0

// 2,3,5,7,

// Sample Input 1

// 6

// Sample Output 1

// 2,3,5,

#include<stdio.h>

    int main(){
    int n;
    scanf("%d", &n);
    for(int i=2; i<=n; i++){
        int flag = 0;
        for(int j=2; j<=i/2; j++){
            if(i%j == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            printf("%d,", i);
        }
    }
    
    return 0;
}