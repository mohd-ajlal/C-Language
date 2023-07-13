#include<stdio.h>
#include<math.h>

int main()
{
    int x,a[100][100],sum=0;
    printf("Enter the size of matrix\n");
    scanf("%d",&x);
    printf("Enter the values in matrix\n");
    for(int i=0;i<x;i++){
    for(int j=0;j<x;j++){
    scanf("%d",&a[i][j]);}}
    for(int i=0;i<x;i++){
    for(int j=0;j<x;j++){
    if(i==j){
    sum=sum+a[i][j];}}}
    printf("the sum of elements of diagonal of matix is: %d",sum);
    return 0;


}