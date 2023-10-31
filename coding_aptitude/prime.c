#include<stdio.h>

int isPrime(int num)
{
        if (num <= 1)
    {
        return 0;
    }
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
    int arr[50], count;
    count = 0;
    for(int i = 0; i<51; i++){
        if (isPrime(i)){
            arr[count] = i;
            count++;
        }
    }
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int count1;
    for(int i = 0; i < arr[i] != '\0'; i++){
        if(arr[i] == num1){
            count1 = i;
            break;
        }
    }
    if(arr[count1+1] == num2){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}