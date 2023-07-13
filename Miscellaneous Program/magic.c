#include<stdio.h>
#include<math.h>
int main()
{
    int n,h,p,sum=0;
    scanf("%d",&n);
    while(n>9)
    {
        while(n>0)
        {
            int r=n%10;
            sum=sum+r;
            n=n/10;
        }
        n=sum;
        sum=0;
    }
    if(n==1)
    printf("magic");
    else
    printf("not magic");
        
    
}