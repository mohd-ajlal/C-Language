#include<stdio.h>

    int main(){
    int month;
    scanf("%d",&month);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 9:
    case 11:
        printf("31");
        break;
    case 2:
        printf("28/29");
        break;
    case 4:
    case 6:
    case 8:
    case 10:
    case 12:
        printf("30");
        break;
    default: 
        printf("Invalid Input");
        break;
    }
    return 0;
}