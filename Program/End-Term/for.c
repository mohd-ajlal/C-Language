// For : For loop in C is used to execute a block of code repeatedly.
//       It is used to iterate a part of the program several times.
//       If the number of iteration is fixed, it is recommended to use for loop.
//       It is also known as entry controlled loop.
//       Syntax:
//       for(initialization; condition; increment/decrement)
//       {
//           //code to be executed
//       }

#include<stdio.h>

    int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0; i<n; i++){
        printf("%d ",i);
    }
    return 0;
}