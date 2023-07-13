#include<stdio.h>
#include<math.h>

int main()
{
    int a[100],n,i,ele,f=0,k;
    printf("enter n");
    scanf("%d",&n);
    printf("enter the elements in array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        printf("enter thge element for search");
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
       { printf("element found at %d",k);
    }
    else
    printf("not found");
    return 0;
    }
