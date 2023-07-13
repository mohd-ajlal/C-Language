#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("enter n");
    scanf("%d",&n);
    int a[n],i,ele,pos,m;
    printf("enter m");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("enter element,pos");
    scanf("%d %d",&ele,&pos);
    for(i=m-1;i>=pos;i--)
    {
        a[i++]=a[i];
    }
    a[pos]=ele;
    m++;
    for(i=0;i<m;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}