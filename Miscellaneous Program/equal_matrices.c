#include<stdio.h>
#include<string.h>
int main()
{
    int x,y,a[100][100],b[100][100];
    printf("Enter the size of both array\n");
    scanf("%d %d",&x,&y);
    printf("enter the value in 1st array\n");
    for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
    scanf("%d",&a[i][j]);}}
    printf("enter the value in 2nd array\n");
    for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
    scanf("%d",&b);}}
    int f=0;
    for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
    if(a[i][j]==b[i][j]){
    f=f+1;}}
    }
    if(f==x*y)
    printf("two matrices are equal\n");
    else
    printf("two matrices are not equal\n");
    return 0;

}