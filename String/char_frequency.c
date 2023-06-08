#include<stdio.h>
#include<string.h>
    int main(){
    char s[50];
    gets(s);
    int len = strlen(s);
    for(int i = 0; i<len; i++){
        int count = 0;
        char ch = s[i];
        for(int j = 0; j<len; j++){
            if(s[i] == s[j]){
                count++;
                s[j] = '\0';
            }
        }
        printf("%c = %d\n", ch, count);
    }
    return 0;
}