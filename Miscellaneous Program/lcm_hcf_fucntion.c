#include<stdio.h>
#include<math.h>
void lcm_hcf(int x,int y);
int main()
{
    int a,b;
    printf("Enter the two numbers\n");
    scanf("%d %d",&a,&b);
    lcm_hcf(a,b);
    return 0;
}
void lcm_hcf(x,y)
{
    int a,b,t,lcm,hcf;
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
}