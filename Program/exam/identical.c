#include<stdio.h>

    int main(){
    char str1[50], str2[50];
    gets(str1);
    gets(str2);
    for(int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++){
        if(str1[i] != str2[i]){
            printf("Not identical");
            break;
        }
        if(str1[i] == '\0' && str2[i] == '\0'){
            printf("Identical");
            break;
        }
    }
    return 0;
}