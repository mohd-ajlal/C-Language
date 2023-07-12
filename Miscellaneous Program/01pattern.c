#include<stdio.h>
#include<math.h>

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((10/6)%2==0)
            {
            printf("0");
            }
            else
            {
                printf("1");
            }
            
        }
        printf("\n");
    }
    return 0;
}