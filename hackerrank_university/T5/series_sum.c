#include<stdio.h>
#include<math.h>

int main()
{
    int i,N;
    float sum;
    int count;
    scanf("%d",&N);
    sum=0.0f;
    count=1;
    for(i=1;i<=N;i++)
    {
        sum = sum +  ( (float)(pow(count,2)) / (float)(pow(count,3)) );
        count+=2;
    }

    printf("%f",sum);

    return 0;
}