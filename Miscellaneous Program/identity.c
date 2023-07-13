#include<stdio.h>
#include<math.h>

int main()
{
    int a[3][3],f=0;
    printf("enter the value in matrices ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j)
            {
                if(a[i][j]!=1)
                {
                    f=1;
                    break;
                }
            }
            else if(a[i][j]!=0){
                f=1;
            }
            
        }
    }
    if(f==0)
    {
        printf("identity");
    }
    else
    {
        printf("not identity");
    }
    return 0;
}