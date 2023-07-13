#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    char a[100];
    printf("Enter the string\n");
    fgets(a,100,stdin);
    printf("The reverse of string is:\n%s",strrev(a));
    return 0;
}
