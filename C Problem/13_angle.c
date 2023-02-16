#include<stdio.h>

    int main(){
    int ang1, ang2;
    printf("Enter two angles: ");
    scanf("%d %d", &ang1, &ang2);
    printf("Third angle is: %d", 180-(ang1+ang2));
    return 0;
}