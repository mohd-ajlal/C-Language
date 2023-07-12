#include<stdio.h>
#include<math.h>
int main()
{
    int n,s=0,p=1,c;
    scanf("%d\n",&n);
    while(s<=n)
    {
      printf("%d,  ",s);
      c=s+p;
      s=p;
      p=c;

    }
  return 0;  
}