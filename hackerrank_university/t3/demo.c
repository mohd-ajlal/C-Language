#include<stdio.h>
#include<string.h>
    int main(){
    // lld
    // long long int a = 1000000000000000000;
    // printf("%lld",a);
    // strok
    char str[100];
    char *token;
    scanf("%[^\n]", str);
    token = strtok(str, "&");
    printf("%s", token);
    while(token != NULL){
        printf("%c", token);
        token = strtok(NULL, "&");
    }
    return 0;
}