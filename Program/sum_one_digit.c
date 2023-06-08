// Sample Input: 12345
// Sample Output: 6


#include<stdio.h>
int main()
{    
    long int num;
    int sum = 0, rem;
    printf("Enter a number: ");
    scanf("%ld", &num);   
    while(num / 10 != 0)
    {
        sum = 0;
        while(num != 0) 
        {
            rem = num % 10;
            sum += rem;     
            num = num / 10;  
        }
        num = sum;
    }
    printf("%d", sum);
    return 0;
}