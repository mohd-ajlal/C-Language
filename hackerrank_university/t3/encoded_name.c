// It is given that name contains five characters. You are given ASCII value of each character separated by &. Now you have to decode it and find that Funny name.

// Input Format

// Five & symbol separated integers representing the ASCII value of character at that position.

// Constraints

// 0 < W1,W2,W3,W4,W5 < 255

// Output Format

// Single line containing five characters representing the name.

// Sample Input 0

// 80&69&65&75&85

// Sample Output 0

// PEAKU

// Explanation 0

// ASCII value of P is 80, E is 69, A is 65, K is 75 and U is 85.

// Sample Input 1

// 65&66&67&68&69

// Sample Output 1

// ABCDE

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int a,b,c,d,e;
    scanf("%d&%d&%d&%d&%d",&a,&b,&c,&d,&e);
    printf("%c%c%c%c%c",a,b,c,d,e);
    return 0;
}