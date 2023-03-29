#include<stdio.h>

    int main(){
    char a;
    scanf("%c",&a);
    if(a>='a' && a<='z'){
        printf("%c",a-32);
    }
    else if(a>='A' && a<='Z'){
        printf("%c",a+32);
    }
    else{
        printf("error");
    }
    return 0;
}   