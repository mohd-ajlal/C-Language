#include<stdio.h>
#include<math.h>

int main()
{
    int n, i = 2, c = 0;
    scanf("%d", &n);
    while (i <= n)
    {
        if (n % i == 0)
        {
            c = c + 1;
        }
        i++;
    }
    if (c == 1)
    {
        printf("no. is prime");
    }
    else
    {
        printf("no. is not prime");
    }
}