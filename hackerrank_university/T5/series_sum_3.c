// Program to calculate the sum of the series :

// 1^3 -2^3 + 3^3 - 4^3 + ... n^3.

// To find the sum of this series, we will read n by the user (which is the total number of terms) and run loop from 1 to n, within the loop body, we will check the condition for EVEN or ODD because, in this series ODD terms are being added and EVEN terms are being subtracting.

// Finally, we will print the calculate sum (result) of the series.

// Input Format

//     Take an integer n from the user.

// Constraints

//     n>=0 && n<=10000

// Output Format

//     It should print the result of the sum of n terms of series.

// Sample Input 0

// 5

// Sample Output 0

// 81

#include<stdio.h>

    int main(){
    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i=1; i<=n; i++){
        if(i%2 == 0){
            sum = sum - (i*i*i);
        }else{
            sum = sum + (i*i*i);
        }
    }
    printf("%d", sum);
    
    return 0;
}