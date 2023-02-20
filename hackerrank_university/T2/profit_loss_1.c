#include<stdio.h>
    int main(){
    float C, S, perc;
    scanf("%f", &C);
    scanf("%f", &S);
    if(C>S){
        perc = (C-S)/C*100;
        printf("Loss\n%.2f%%", perc);
    }
    else if(C<S){
        perc = (S-C)/C*100;
        printf("Profit\n%.2f%%", perc);
    }

    return 0;
}