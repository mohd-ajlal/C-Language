// Input : Mohd Ajlal
// Output: Good Morning Mohd Ajlal 

#include<stdio.h>

    int main(){
    char name[20];
    printf("Enter your name: ");
    scanf("%[^\n]s", name);
    printf("Good Morning %s", name);
    return 0;
}