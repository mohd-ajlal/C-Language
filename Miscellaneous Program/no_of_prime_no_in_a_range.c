#include<stdio.h>
#include<math.h>
// no of prime no. in a range
int prime(int  n);
int main()
{
    int n ;
    scanf("%d",&n);
    for(int i =2;i<=n;i++)
    {
        int c = prime(i);
        if(c==1)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
int prime(int n)
{
    int flag =0;
    for(int i =2;i<n;i++)
    {
        if(n%i==0)
        {
            flag =1;
            break;
        }
    }
    if(flag==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}