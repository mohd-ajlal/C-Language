#include<stdio.h>
#include<string.h>

    int main(){
    int count = 0;
    char num[101];
    scanf("%s", &num);
    for(int i= 0; i<strlen(num); i++){
        if(num[i] == '4' || num[i] == '7'){
            count++;
        }
    }    

    if(count == 4 || count == 7){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}