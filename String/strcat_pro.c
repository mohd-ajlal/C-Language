#include<stdio.h>

    int main(){
    char a[50], b[50];
    gets(a);
    gets(b);
    int i = 0, j = 0;
    while(a[i] != '\0'){
        i++;
    }
    while(b[j] != '\0'){
        a[i] = b[j];
        i++;
        j++;
    }
    // a[i] = '\0';
    printf("%s", a);
    return 0;
}