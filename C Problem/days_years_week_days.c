// WAP in C to enter days and convert it into years, weeks and days.
#include<stdio.h>

    int main(){
    int days;
    printf("Enter days: ");
    scanf("%d", &days);
    printf("Years: %d\n", days/365);
    printf("Weeks: %d\n", (days%365)/7);
    printf("Days: %d", (days%365)%7);
    return 0;
}