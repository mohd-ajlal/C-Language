#include<stdio.h>
#include<math.h>

int main()
{   int n;
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];
    printf("ente the value in first matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the value in second matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<n;j++)
    {   c[i][j]=0;
        for(int k=0;k<n;k++)
        {
            c[i][j]+=a[i][k]*b[k][j];
        }
    }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}