#include<stdio.h>
#include<math.h>

int main()
{
    int n,p;
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
    for(int i=-0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
           for(j=0;j<n;j++){
            if(i==j)
            {
                if(i==j && (i+j)==(n-1)){
                    printf(" ");
                }
                printf("%d ",a[i][j]);
                continue;
            }
            else if((i+j)==(n-1))
            {
              printf("%d ",a[i][j]);
            }
           } 
           printf("\n");
        }
    }
    
    return 0;
}