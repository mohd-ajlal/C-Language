#include<stdio.h>

    int main(){
    char day;
    printf("Input week day first char and if repeating enter second char: ");
    scanf("%c", &day);
    switch(day){
        case 'M':
            printf("Monday");
            break;
        case 'T':
            printf("Tuesday");
            break;
        case 'W':
            printf("Wednesday");
            break;
        case 'H':
            printf("Thursday");
            break;
        case 'F':
            printf("Friday");
            break;
        case 'S':
            printf("Saturday");
            break;
        case 'U':
            printf("Sunday");
            break;
        default:
            printf("Invalid input");
    }

    return 0;
}