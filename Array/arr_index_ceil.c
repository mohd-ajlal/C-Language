#include<stdio.h>

    int main(){
    int arr[4] = {1,2,4,5}, num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int ceil;
    for(int i=0; i<4; i++){
        if(arr[i] == num){
            ceil = i;
            break;
        }
        else{
            for(int j=0; j<4; j++){
                if(arr[j] == num+1){
                    ceil = j;
                    break;
                }
            }
        }
    }
    printf("%d", arr[ceil]);
    return 0;
}