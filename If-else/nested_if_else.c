// nested if else statements

// Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.

// #include<stdio.h>

//     int main(){
//     int num;
//     printf("Enter an number: ");
//     scanf("%d",&num);
//     if (num%3==0 || num % 5 == 0){
//         if (num%15 != 0){
//             printf("Number is divisible by 5 or 3 but not divisible by 15");
//         }
//         else{
//             printf("Number is divisible by 5 or 3 and also 15");
//         }
//     }
//     else{
//         printf("Number is neither disible by 5 nor 3.");
//     }
//     return 0;
// }

// without nested if else statements

#include<stdio.h>

    int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if((a%3==0 || a%5 == 0) && a%15!=0){
        printf("Number is divisible by 5 or 3 but not divisible by 15");
    }
    else{
        printf("Number is divisible by 15 or not divisible by 3 or 5 both");
    }
    return 0;
}