#include<stdio.h>

    int main(){
    int sub1, sub2, sub3, sub4, sub5, total;
    float avg, per;
    printf("Enter marks of 5 subjects: ");
    scanf("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4, &sub5);
    total = sub1+sub2+sub3+sub4+sub5;
    avg = (sub1+sub2+sub3+sub4+sub5)/5;
    per = (sub1+sub2+sub3+sub4+sub5)/5;
    printf("Total is: %d\n", total);
    printf("Average is: %f\n", avg);
    printf("Percentage is: %f", per);
    return 0;
}