#include<stdio.h>

    int main(){
    int num1, num2;
    scanf("%d %d",&num1, &num2);
    int count = 0;
    for(int i=1; i<=num1; i++){
        count += i;
    }
    num2 = num2%count;
    for(int i =1; i<=num1; i++){
        if(num2>=i){
            num2 -= i;
        }else{
            break;
        }
    }
    printf("%d\n",num2);
    return 0;
}