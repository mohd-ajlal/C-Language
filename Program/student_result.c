#include<stdio.h>

    int main(){
    int sub1, sub2, sub3, sub4, sub5, total;
    float percentage;
    printf("Enter subject1 marks out of 100: ");
    scanf("%d", &sub1);
    printf("Enter subject2 marks out of 100: ");
    scanf("%d", &sub2);
    printf("Enter subject3 marks out of 100: ");
    scanf("%d", &sub3);
    printf("Enter subject4 marks out of 100: ");
    scanf("%d", &sub4);
    printf("Enter subject5 marks out of 100: ");
    scanf("%d", &sub5);
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = total / 5;
    printf("Total Marks of student out of 500 is %d \n Percentage is %f", total, percentage); 
    return 0;
}