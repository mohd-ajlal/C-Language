// Here you have to find the sum of Natural Number/Factorial of Number of all natural numbers from 1 to N". Series: 1/1! + 2/2! + 3/3! + 4/4! + ... N/N!

// Input Format

//     Take an integer "n" as the limit of series from the user.

// Constraints

//     n>0 && n<10000

// Output Format

//     Print the sum of the natural/Factorial of Number of all natural numbers series.

// Sample Input 0

// 5

// Sample Output 0

// 2.708333

#include<stdio.h>

    int main(){
    int n;
    scanf("%d", &n);
    float sum = 0;
    for(int i=1; i<=n; i++){
        int fact = 1;
        for(int j=1; j<=i; j++){
            fact = fact * j;
        }
        sum = sum + (float)i/fact;
    }
    printf("%.6f", sum);
    
    return 0;
}