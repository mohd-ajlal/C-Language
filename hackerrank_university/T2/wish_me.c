#include<stdio.h>

    int main(){
    int h, m;
    scanf("%d %d", &h, &m);
    if((h>=1 && h<=3) && m<=59){
        printf("Good Night");
    }
    else if((h==22 || h==23) && m<=59){
        printf("Good Night");
    }
    else if((4<=h && h>=11) && m<=59){
        printf("Good Morning");
    }
    else if((12<=h && h>=15 )&& m<=59){
        printf("Good Afternoon");
    }
    else if((16<=h && h>=20) && m<=59){
        printf("Good Evening");
    }
    return 0;
}