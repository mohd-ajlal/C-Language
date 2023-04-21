/* structure is used to return two values from minMax() */
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

/*If there is only one element then return it as min and max both*/
if (n == 1)
{
	minmax.max = arr[0];
	minmax.min = arr[0];	
	return minmax;
}

/* If there are more than one elements, then initialize min
	and max*/
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

/* Driver program to test above function */
int main()
{
// int arr[] = {1000, 11, 445, 1, 330, 3000};
// int arr_size = 6;
// struct pair minmax = getMinMax (arr, arr_size);
// printf("nMinimum element is %d", minmax.min);
// printf("nMaximum element is %d", minmax.max);
// getchar();
int t, n;
scanf("%d", &t);
scanf("%d", &n);

for(int i=0; i<t; i++){
    int arr[n];
    for(int j=0; j<n; j++){
        scanf("%d", &arr[j]);
    }
    struct pair minmax = getMinMax (arr, n);
    printf("Min=%d Max=%d", minmax.min, minmax.max);
}
return 0;


}
