/*write a c program to reverse a given number*/
#include <stdio.h>
#include <math.h>
int main()
   {
    int n,b,c=0,h;
    scanf("%d",&n);
    h=n;
    while(n!=0)
    {
        b=n%10;
        c=c*10+b;
        n=n/10;
    }
    if(h==c)
    {
    printf("%d is palidrome",c);
    }
    else
    {
        printf("no. is not palidrome");
    }
   }