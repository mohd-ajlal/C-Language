#include<stdio.h>
#include<math.h>

int main()
{
    int k,c=0,h,n,sum=0,p,p1;
    scanf("%d",&n);
    p=n;
    p1=n;
     while(n!=0)
    {
      
        n=n/10;
          c=c+1;

    }
    //printf("c=%d",c);
    while(p>0)
    {
        h=p%10;
        sum=sum+pow(h,c);
        p=p/10;
        printf("sum=%d h=%d\n",sum,h);

    }
    if(p1==sum)
    {
        printf("no. is armstrong");
    }
    else
    {
        printf("no. is not armstrong");
    }
    return 0;
}
