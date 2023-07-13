#include<stdio.h>
#include<math.h>

int main()
{
    int n,p,sub;
    printf("enter the size for both matrices\n");
    scanf("%d %d",&n,&p);
    int a[n][p];
    int b[n][p];
    int c[n][p];
    printf("enter the value in first matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the value for second matrices\n");
           for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            sub=a[i][j]-b[i][j];
            c[i][j]=sub;
        }
    }
    printf("the subtractionof matrices is equal to\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}