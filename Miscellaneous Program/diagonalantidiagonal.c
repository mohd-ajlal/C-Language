#include<stdio.h>
#include<math.h>

int main()
{
    int n,sum=0,sum1=0;
    printf("enter the size of matrice\n");
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                sum1=sum1+a[i][j];
            }
        }
    }
    if(sum==sum1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
        return 0;
}