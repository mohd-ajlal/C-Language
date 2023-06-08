#include<stdio.h>

    int main(){
    char str[100];
    gets(str);
    int i = 0;
    for(i = 0; str[i]!='\0'; i++);
    printf("%d", i);
    
    return 0;
}