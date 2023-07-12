#include<stdio.h>
#include<math.h>

int main()
{
    int a[100];
    int m,pos;
    printf("enter the size that you want to fill");
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
        printf("enter the pos");
        scanf("%d",&pos);
        for(int i=pos;i<m-1;i++)
        {
            a[i]=a[i+1];
        }
        m--;
        for(int i=0;i<m;i++)
        {
            printf("%d",a[i]);
        }

    
    return 0;
}