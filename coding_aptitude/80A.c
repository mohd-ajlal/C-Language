#include <stdio.h>

int isPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int nextPrime = n + 1;
    while (!isPrime(nextPrime))
    {
        nextPrime++;
    }

    if (m == nextPrime)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}