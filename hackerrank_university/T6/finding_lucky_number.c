#include<stdio.h>

    int main(){
    int num;
    scanf("%d",&num);
    int arr[6];
    for(int i = 0; i<6; i++){
        arr[i] = num%10;
        num = num/10;
    }
    int out = 0;
    for(int i = 0; i<6; i++){
        if(arr[i] == 3 || arr[i] == 9){
            out += 1;
        }
    }
    if(out>=2){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}