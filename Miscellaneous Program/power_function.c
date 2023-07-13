#include<stdio.h>
#include<math.h>
int power(int a,int b);

int main()
{
    int a,b;
    power(a,b);
    return 0;
}
int power(int a,int b)
{
   int x,n;
   int ans=1;
   printf("enter the no.\n");
   scanf("%d",&x);
   printf("enter the power\n");
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {ans*=x;}
   printf("%d",ans);
   return ans;

}