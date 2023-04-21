#include<stdio.h>
struct pair
{
int min;
int max;
};

struct pair getMinMax(int arr[], int n)
{
struct pair minmax;    
int i;
if (n == 1)
{
    minmax.max = arr[0];
    minmax.min = arr[0];    
    return minmax;
}

if (arr[0] > arr[1])
{
    minmax.max = arr[0];
    minmax.min = arr[1];
}
else
{
    minmax.max = arr[1];
    minmax.min = arr[0];
}

for (i = 2; i<n; i++)
{
    if (arr[i] > minmax.max)    
    minmax.max = arr[i];

    else if (arr[i] < minmax.min)    
    minmax.min = arr[i];
}

return minmax;
}

int main()
{
int t, n;
scanf("%d", &t);
scanf("%d", &n);

for(int i=0; i<t; i++){
    int arr[n];
    for(int j=0; j<n; j++){
        scanf("%d", &arr[j]);
    }
    struct pair minmax = getMinMax (arr, n);
    printf("Min=%d Max=%d\n", minmax.min, minmax.max);
}
return 0;


}
