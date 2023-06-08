// Make a program to take an array of integer as input and print absolute difference between sum of even and odd numbers in the array.
// Example:
// Input: 1 2 3 4 5
// Output: 3

#include<stdio.h>

    int main(){
    int arr[100];
    for(int j = 0; j<n; j++){
        scanf("%d",&arr[j]);
    }
    int even_sum=0, odd_sum=0;
    for(int j = 0; j<n; j++){
        if(arr[j] % 2 == 0){
            even_sum += arr[j];
        }
        else{
            odd_sum += arr[j];
        }
    }
    int out;
    if(even_sum > odd_sum){
        out = even_sum - odd_sum;
    }
    else{
        out = odd_sum - even_sum;
    }
    printf("%d",out);
    return 0;
}