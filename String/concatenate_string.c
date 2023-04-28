// Concatination:

#include<stdio.h>
#include<string.h>

    int main(){
    char str1[50]="Mohd";
    char str2[20]=" Ajlal";
    int len1 =strlen(str1);
    for(int i=0;str2[i];i++){
        str1[len1+i]=str2[i];
    } 
    printf("%s",str1);
    return 0;
}