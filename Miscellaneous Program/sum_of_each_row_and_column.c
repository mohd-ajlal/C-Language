#include<stdio.h>
#include<math.h>

int main()
{
    int x,y,a[100][100],sum=0;
    printf("Enter the size of matrix\n");
    scanf("%d %d",&x,&y);
    printf("Enter the value in array\n");
    for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
    scanf("%d",&a[i][j]);}}
    for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
    sum=sum+a[i][j];}
    printf("The sum of %d row is %d.\n",i,sum);
    sum=0;}
    sum=0;
    for(int j=0;j<y;++j){
    for(int i=0;j<x;++i){
    sum=sum+a[i][j];}
    printf("The sum of %d column is %d.\n",j,sum);
    sum=0;}
    return 0;
}