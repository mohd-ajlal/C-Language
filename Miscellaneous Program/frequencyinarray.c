#include<stdio.h>
#include<math.h>

int main()
{
    int a[10],b[1000]={0},i,max;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        
    } 
    max=a[0];
    for(i=0;i<10;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    for(i=0;i<10;i++)
    {
        b[a[i]]++;
    }
    for(i=0;i<=max;i++)
    {
        if(b[i]>0)
        {
            printf("%d = %d\n",i,b[i]);
        }
    }

    return 0;
}