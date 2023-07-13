#include<stdio.h>
#include<math.h>

int main()
{
    int a[3][3],b[3][3];
    printf("Enter the value in matrix\n");
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }
    for(int i=0;i<3;i++){
    
        for(int j=0;j<3;j++)
        {
          b[i][j]=a[j][i];
        }
    }
     int f=0;
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++){
        if(a[i][j]==b[i][j]);
        else{
            f=1;
        }
    }
    if(f==0)
    printf("the matrix is symmetric");
    else
    printf("the matrix is not symmetric");

    return 0;
}