#include<stdio.h>

    int main(){
        int t;
        scanf("%d",&t);
        while(t--){
        char str[1000000];
        scanf("%s",str);
        int count[26] = {0};
        int i;
        for(i=0;str[i]!='\0';i++){
            count[str[i]-'a']++;
        }
        int max = 0;
        int count_max_char = 0;
        for(i=0;i<26;i++){
            if(count[i]>max){
                max = count[i];
                count_max_char = 1;
            }
            else if(count[i]==max){
                count_max_char++;
            }
        }
        printf("%d %d\n",count_max_char, max);
        }

    return 0;
}