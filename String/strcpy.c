#include<stdio.h>
#include<string.h>
    int main(){
    char s1[] = "Ajlal";
    char s2[] = "Mohd";
    strcpy(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    return 0;
}