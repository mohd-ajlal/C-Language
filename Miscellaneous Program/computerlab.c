// /*write a c program to reverse a given number*/
// #include <stdio.h>
// #include <math.h>
// int main()
// /*{
//     int n,b,c=0,h;
//     scanf("%d",&n);
//     h=n;
//     while(n!=0)
//     {
//         b=n%10;
//         c=c*10+b;
//         n=n/10;
//     }
//     if(h==c)
//     {
//     printf("%d is palidrome",c);
//     }
//     else
//     {
//         printf("no. is not palidrome");
//     }

// }*/
// /*{
//     int n, i = 2, c = 0;
//     scanf("%d", &n);
//     while (i <= n)
//     {
//         if (n % i == 0)
//         {
//             c = c + 1;
//         }
//         i++;
//     }
//     if (c == 1)
//     {
//         printf("no. is prime");
//     }
//     else
//     {
//         printf("no. is not prime");
//     }
// }*/
// /*WRITE A C PROGRAM TO CHECK WHEATHER THE GIVEN EQ (AX^2+BX+C=0) HAS REAL 0R REAL AND EQUAL OR IMAGINERY ROOTS BY
// TAKING VALUE OF A,B,ANDC*/
// /*{
//     int k,c=0,h,n,h1,sum=0,p;
//     scanf("%d",&n);
//     while(h!=0)
//     {
//         h1=h%10;
//         sum=sum+pow(h1,c);
//         h=h/10;

//     }
//     if(sum==p)
//     {
//         printf("no. is armstrong");
//     }
//     else
//     {
//         printf("no. is not armstrong");
//     }
// }//     h=n;
//     p=n;
//     while(n!=0)
//     {
//         c=c+1;
//         n=n/10;
//     }

// /*{
//     int a,b,c=0;
//     scanf("%d",&a);
//     while(a!=0)
//     {
//         b=a%10;
//         c=c*10+b;
//         a=a/10;
//     }
//     printf("%d",c);

// }*/
// /*{
//     int n,sum,m;
//     sum=0;
//     printf("enyer the no.");
//     scanf("%d",&n);
//     while(n!=0)
//     {
//       m=n%10;
//       sum=sum+m;
//       n=n/10;  
//     }
//     printf("the sum of digits of no. is %d",sum);
// }*/
// /*{
//     int n,f=1,i=1;
//     printf("Enter the no. \n");
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         f=f*i;
//         i++;
//     }
//     printf("The factorial of no. %d is %d",n,f);
// }*/
// {
//     int i=1,n;
//     printf("Enter the no. \n");
//     scanf("%d",&n);
//     while(i<=n);
//     {
//         if(n%i==0)
//         {
//             printf("%d",i);
//         }
//         i++;
//     }
//     return 0;
// }

#include<stdio.h>


int main()
{
    int a;
 a=2;
printf("%ld",sizeof(a+3.5));
printf("%ld",sizeof(a+3));

    return 0;
}