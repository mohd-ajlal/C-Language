#include<stdio.h>

    int main(){
    char str1[50], str2[50];
    gets(str1);
    gets(str2);
    int count1 = 0, count2 = 0;
    for(int i = 0; str1[i] != '\0'; i++){
        count1++;
    }
    for(int i = 0; str2[i] != '\0'; i++){
        count2++;
    }
    if(count1 > count2){
        printf("%s", str1);
    }
    else if(count1 < count2){
        printf("%s", str2);
    }
    else{
        printf("Both are equal");
    }
    return 0;
}