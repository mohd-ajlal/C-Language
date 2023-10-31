#include<stdio.h>

int isPrime(int num)
{
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

    int main(){
    int arr[50];
    count = 0;