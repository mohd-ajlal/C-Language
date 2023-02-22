#include<stdio.h>

    int main(){
    int a, b, c;
    printf("Enter number: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("%d is the largest number",a);
            printf("%d is the smallest number",b);
        }
        else{
            printf("%d is the largest number",c);
            printf("%d is the smallest number",a);
        }
    }
        
    else{
            if(b>c){
            printf("%d is the largest number",b);
            printf("%d is the smallest number",a);
        }
        
        else{
            printf("%d is the largest number",c);
            printf("%d is the smallest number",b);
        }   
    }
    return 0;
}