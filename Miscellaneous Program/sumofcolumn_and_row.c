#include<stdio.h>
#include<math.h>

int main()
{
    int a[3][3],d=0;
    printf("eneter the the value in matrix\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int b[3][3];
    for(int i=0;i<3;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            printf("%d  ",a[i][j]);
            sum=sum+a[i][j];
            if(i==j)
            d=d+a[i][j];
        }
        printf("%d\n",sum);
    }
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum=sum+a[j][i];
            printf("%d  ",a[i][j]);
        }
        printf("%d\n",sum);
    }

}
