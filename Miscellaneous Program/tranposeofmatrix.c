#include<stdio.h>
#include<math.h>

int main()
{
    int a[3][3];
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
    for(int j=0;j<3;j++)
    {
        b[i][j]=a[j][i];
    }
    printf("the tranpose of matrix will be\n");
    for(int i=0;i<3;i++)
    {
    for(int j=0;j<3;j++)
    {
        printf("%d\t",b[i][j]);
    }
    printf("\n");
    }
    return 0;
}