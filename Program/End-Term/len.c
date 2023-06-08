// #include<stdio.h>
// #include<string.h>

//     int main(){
//         char str1[1000], str2[1000];
//         scanf("%s", str1);
//         scanf("%s", str2);
//         int len1 = strlen(str1);
//         int len2 = strlen(str2);
//         if(len1 > len2){
//             printf("%s", str1);
//         }
//         else if(len2 > len1){
//             printf("%s", str2);
//         }
//         else{
//             printf("%s\n", str1);
//             printf("%s", str2);
//         }
//     return 0;
// }


#include<stdio.h>
#define MAX_LIMIT 1000
    int main(){
    char str1[MAX_LIMIT], str2[MAX_LIMIT];
    int count1 = 0, count2 = 0;
    fgets(str1, MAX_LIMIT, stdin);
    fgets(str2, MAX_LIMIT, stdin);
    for(int i = 0; str1[i] != '\0'; i++){
        if(str1[i] != ' '){
            count1++;
        }
    }
    for(int i = 0; str2[i] != '\0'; i++){
        if(str2[i] != ' '){
            count2++;
        }
    }
    if(count1 > count2){
        printf("%s", str1);
    }
    else if(count2 > count1){
        printf("%s", str2);
    }
    else{
        printf("%s", str1);
        printf("%s", str2);
    }
    return 0;
}