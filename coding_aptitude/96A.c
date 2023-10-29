#include<stdio.h>

    int main(){
    char num[100];
    gets(num);
    int count1 = 0;
    int count2 = 0;
    for(int i = 0; i<num[i] != '\0'; i++){
        if(num[i] == '0'){
            count1++;
            count2 =0;
        }
        if(num[i] == '1'){
            count2++;
            count1 =0;
        }
        if(count1 == 7 || count2 ==7){
            break;
        }
    }
    if(count1 == 7 ||  count2 == 7){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}