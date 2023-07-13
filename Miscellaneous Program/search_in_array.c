#include<stdio.h>
#include<math.h>
int main()
{
    int a[100],i,n,ele,f=0,k;
    printf("enter the elements in array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element for search");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            f=1;
            k=i+1;
            break;
        }
    }
    if(f==1)
    {
        printf("element found at %d",k);
    }
    else
    {
        printf("not found");
    }

    return 0;
}