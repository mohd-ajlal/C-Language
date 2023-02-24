//     Problem
//     Submissions
//     Leaderboard
//     Discussions

// Write a program that asks for user`s name and print Welcome NAME

// Input Format

// Single line containing a string S.

// Constraints

// 0 < | S | < 1000000

// Output Format

// Single line containing Welcome followed by name of user.

// Sample Input 0

// Ram

// Sample Output 0

// Welcome Ram

#include <stdio.h>
int main()
{
    char str[200];
    scanf("%[^\n]%*c", str);
    printf("Welcome %s", str);

    return 0;
}
