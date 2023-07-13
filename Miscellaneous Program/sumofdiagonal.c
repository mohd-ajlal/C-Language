#include<stdio.h>
#include<math.h>

int main()
{
    int n,p,sum=0;
    scanf("%d",&n);
    scanf("%d",&p);
    int a[n][p];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
            sum=sum+a[i][i];
        }
    printf("%d",sum);
    
    return 0;
}