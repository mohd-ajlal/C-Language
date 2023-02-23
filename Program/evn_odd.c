#include<stdio.h>

    int main(){
    int num_start, num_stop;
    printf("Enter the value of num_start: ");
    scanf("%d", &num_start);
    printf("Enter the value of num_stop: ");
    scanf("%d", &num_stop);
    while(num_start<=num_stop){
        if(num_start%2==0){
            printf("%d is even\n", num_start);
        }
        else{
            printf("%d is odd\n", num_start);
        }
        num_start++;
    }
    return 0;
}