#include<stdio.h>

    int main(){
    char s[50];
    scanf("%s", &s);
    for(int i = 0; s[i]!='\0'; i++){
        // if(s1[i]>='A' && s1[i]<='Z')
        if(s[i]>=65 && s[i]<=90){
            s[i] = s[i] + 32;
        }
    }
    printf("%s", s);
    return 0;
}