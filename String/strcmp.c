#include<stdio.h>

    int main(){
    char str1[50], str2[50];
    gets(str1);
    gets(str2);
    int i = 0;
    for(int i = 0; str1[i] != '\0' || str2[i] !='\0'; i++);
    return 0;
}