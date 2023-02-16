// WAP in c to enter a number and print its square root.
#include<stdio.h>
#include<math.h>
    int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Square root of %d is: %f", num, sqrt(num));  
    return 0;
}