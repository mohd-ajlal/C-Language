// Program to eliminate/remove first character of each word from a string. Logic to implement :

//     Eliminate first character of the string (first character of first word) by shifting other character to the left.
//     Eliminate the first character of other word (by checking whether there is an index has space and index+1 (next to index where space found) non space and shift other characters to the left.
//     Run this process until NULL not found in the parent loop.

// Input Format

//     Take a string from the user.

// Constraints

//     String length should not exceed 10000.

// Output Format

//     It should print the string after removing the first character of each word in the given string.

// Sample Input 0

// Hello friends.

// Sample Output 0

// ello riends.

#include<stdio.h>

    int main(){
    char s[10000];
    scanf("%[^\n]s",s);
    int i,j;
    for(i=0;s[i]!='\0';i++){
        if(i==0){
            for(j=0;s[j]!='\0';j++){
                s[j]=s[j+1];
            }
        }
        if(s[i]==' '){
            for(j=i;s[j]!='\0';j++){
                s[j]=s[j+1];
            }
        }
    }
    printf("%s",s);

    return 0;
}