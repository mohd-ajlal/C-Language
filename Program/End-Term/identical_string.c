#include<stdio.h>
#define MAX 100
    int main(){
    char str1[MAX], str2[MAX];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    int i = 0;
    while(str1[i] == str2[i]){
        if(str1[i] == '\0' || str2[i] == '\0'){
            break;
        }
        i++;
    }
    if(str1[i] == '\0' && str2[i] == '\0'){
        printf("Identical\n");
    }
    else{
        printf("Not Identical\n");
    }
    return 0;
}