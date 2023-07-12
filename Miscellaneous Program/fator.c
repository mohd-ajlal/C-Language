#include<stdio.h>
#include<math.h>

int main()

    {
    int count=1,num;
    printf("Enter the no. \n");
    scanf("%d",&num);
    
    while(count<=num)
    {
        if(num % count == 0)
        {
            printf("%d\n",count);
        }
        count++;
    }
    return 0;
}


