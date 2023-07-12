#include<stdio.h>
#include<math.h>
int main()
{
    int a[1000],i,n;
    printf("enter the elements to be inserted\n");
    scanf("%d",&n);
    printf("enter the elements in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int f[100],g[100],e=0,m=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            f[e]=a[i];
            e++;
        }
        else
        {
            g[m]=a[i];
            m++;
        }
    }
    printf("even array\n");
    for(i=0;i<e;i++)
    {
        printf("%d\n",f[i]);
    }
    printf("odd array\n");
    for(i=0;i<m;i++)
    {
        printf("%d\n",g[i]);
    }
    return 0;
}