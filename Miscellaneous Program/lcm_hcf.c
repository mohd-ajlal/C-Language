/*write a pr to find hcf & lcm of two numbers*/
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, x, y, t,lcm,hcf;
    printf("enter the two no.\n");
    scanf("%d %d",&x,&y);
    a = x;
    b = y;
    while (b!=0)
    {
        t=b;
        b = a % b;
        a = t;
    }
    hcf=a;
    lcm =(x*y)/hcf;
    printf("hcf of %d & %d is %d\n",x,y,hcf);
    printf("lcm of %d & %d is %d\n",x,y,lcm);
    
 return 0;
}
