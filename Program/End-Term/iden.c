#include<stdio.h>
#include<string.h>
    int main(){
    char str1[100], str2[100];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    int i = 0;
    for(i = 0; str1[i] == str2[i]; i++){
        if(str1[i] == '\0' || str2[i] == '\0'){
            break;
        }
    }
    if(str1[i] == '\0' && str2[i] == '\0'){
        printf("Identical\n");
    }
    else{
        printf("Not Identical\n");
    }
    return 0;
}