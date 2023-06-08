#include<stdio.h>
#define MAX 50
    int main(){
    char a[50], b[50], c[50], d[50], e[50];
    // gets(a);
    // fgets(b, MAX, stdin);
    // scanf("%s", c);
    // scanf("%[^\n]s", d);
    scanf("%[^\n]%*c", e);
    // printf("%s\n", a);
    // printf("%s\n", b);
    // printf("%s\n", c);
    // printf("%s\n", d);
    printf("%s\n", e);
    return 0;
}