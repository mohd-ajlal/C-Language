#include<stdio.h>

    int main(){
    int arr[20];
    for(int i=0; i<20; i++){
        scanf("%d",&arr[i]);
    }
    int odd = 0;
    int even = 0;
    for(int i=0; i<20; i++){
       if(arr[i]%2==0){
            even += 1;
       }
       else{
            odd += 1;
       }
    }
    printf("Even: %d",even);
    printf(" Odd: %d",odd);
    return 0;
}