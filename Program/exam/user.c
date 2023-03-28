#include<stdio.h>

    int main(){
    int userid, password;
    printf("Enter your user id: ");
    scanf("%d", &userid);
    switch (userid)
    {
    case 1234:
        printf("Enter your password: ");
        scanf("%d", &password);
        switch (password)
        {
        case 0000:
            printf("Welcome to the system.");
            break;
        
        default:
            printf("Wrong password.");
            break;
        }
        break;
    
    default:
        printf("Wrong user id.");
        break;
    }
    return 0;
}
