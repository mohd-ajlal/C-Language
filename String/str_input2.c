#include<stdio.h>
#define MAX 100
    int main(){
    char str[MAX];
    fgets(str, MAX, stdin);
    printf("%s", str);
    return 0;
}