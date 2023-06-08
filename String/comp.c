#include<stdio.h>
#include<string.h>
    int main(){
    char s1[100][100], s[100];
    int i, j, n;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%s",&s1[i]);
    }

    for(i = 0; i<n; i++){
        for(j = i+1; j<n; j++){
            if(strcmp(s1[i],s1[j])>0){
                strcpy(s, s1[i]);
                strcpy(s1[i], s1[j]);
                strcpy(s1[j], s);
            }
        }
    }
    for(int i = 0; i<n; i++){
        printf("%s ", s1[i]);
    }
    return 0;
}