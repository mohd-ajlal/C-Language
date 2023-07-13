#include<stdio.h>
#include<math.h>

int main()
{
    int a[5],i,sum=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            sum=sum+a[i];
        }
    }
    printf("%d",sum);
    return 0;
}