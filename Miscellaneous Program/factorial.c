#include<stdio.h>
#include<math.h>

int main()
{
    int i=1,fac=1,n;
    scanf("%d",&n);
    while(i<=n)
    {
        fac=fac*i;
        i++;
        
    }
    printf("%d",fac);
    return 0;
}