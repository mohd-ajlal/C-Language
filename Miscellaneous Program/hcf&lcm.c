/*write a pr to find hcf & lcm of two numbers*/
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, x, y, t, gcd,h;
    printf("enter the two no.\n");
    scanf("%d %d",&x,&y);
    a = x;
    b = y;
    while (b != 0)
    {
        b = t;
        b = a % b;
        a = t;
    }
    h = a;
    gcd = (x*y )/ h;
    printf("lcm of %d & %d is %d", x, y, gcd);
    printf("hcf of %d & %d is %d ", x, y, h);
 return 0;
}