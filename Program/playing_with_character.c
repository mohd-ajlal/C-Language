#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[24];
    char sen[100];
    scanf("%c\n%s\n%[^\n]s",&ch,s,sen);
    printf("%c\n%s\n%s",ch,s,sen);
    return 0;
}