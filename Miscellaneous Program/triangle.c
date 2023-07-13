#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int sum = a+b+c;
        if(sum==180&&a!=0&&b!=0&&c!=0)
        {
            printf("Valid triangle\n");
        }
        else
        {
            printf("Not a valid triangle\n");
        }
    }
    return 0;
}