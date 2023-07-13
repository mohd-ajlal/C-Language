#include<stdio.h>
int main()
{
    /*int a=5;
    switch(a)
    {
    case 3:printf("hello gla");
    break;
    case 2:printf("gla");
    break;
    case 5:printf("fuck");
    }
    return 0;*/
    /*int a,b;
    scanf("%d",&a);
    b=a%2;
    switch(b)
    {
        case 0:printf("no. is even");
        break;
        case 1:printf("no. is odd");
    }*/
    int a;
    scanf("%d",&a);
    switch(a>0)
    {
        case 1:printf("no. is positive");
        break;
        case 0:switch(a<0)
        {
            case 1:printf("no. is negative");
            break;
            case 0:printf("no. is zero");
        }
    }
}
    
   