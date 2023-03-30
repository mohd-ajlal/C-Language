/*C program to check number is power or 2 or not.*/
 
#include <stdio.h>
 
int main()
{
    int num;
    int tempNum,flag;
    scanf("%d",&num);
     
    tempNum=num;
    flag=0;
    while(tempNum!=1)
    {
        if(tempNum%2!=0){
            flag=1;
            break;
        }
        tempNum=tempNum/2;
    }
  
    if(flag==0)
        printf("1");
    else
        printf("0");
      
    return 0;
}
