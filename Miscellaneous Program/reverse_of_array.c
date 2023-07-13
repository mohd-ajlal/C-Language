#include<stdio.h>
#include<math.h>

int main()
{
    int a[100],i,n;
    printf("enter the no. of elements\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int temp;
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    printf("after reversing");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}