#include<stdio.h>

    int main(){
    char c;
    scanf("%c", &c);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        printf("Vowel.");
    }
    else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        printf("Consonant.");
    }
    else{
        printf("Not an alphabet.");
    }

    // char c;
    // scanf("%c", &c);
    // if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') printf("Vowel.");
    // else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) printf("Consonant.");
    // else printf("Not an alphabet.");
    // return 0;
}