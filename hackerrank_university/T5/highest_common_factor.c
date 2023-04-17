// Find the Highest Common Factor of the two numbers entered by the user.

// Input Format

//     Take first integer n1 from the user.
//     Take second integer n2 from the user.

// Constraints

//     n1,n2>=1
//     n1,n2<=100000000

// Output Format

//     Print the HCF of the given numbers.

// Sample Input 0

// 10 15    

// Sample Output 0

// 5

// Sample Input 1

// 6 9

// Sample Output 1

// 3

#include<stdio.h>

    int main(){
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int min = n1;
    if(n2<min){
        min = n2;
    }
    int hcf = 1;
    for(int i=1; i<=min; i++){
        if(n1%i == 0 && n2%i == 0){
            hcf = i;
        }
    }
    printf("%d", hcf);
    
    return 0;
}