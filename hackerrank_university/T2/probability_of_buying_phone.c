#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int P1, P2, P3, A;
    scanf("%d", &P1);
    scanf("%d", &P2);
    scanf("%d", &P3);
    scanf("%d", &A);
    if(P1>A && P2>A && P3>A){
        printf("0.000\n");
        printf("0.000\n");
        printf("0.000\n");
    }
    else if (P1>A && P2>A && P3<=A)
    {
        printf("0.000\n");
        printf("0.000\n");
        printf("1.000\n");
    }
    else if (P1>A && P2<=A && P3>A)
    {
        printf("0.000\n");
        printf("1.000\n");
        printf("0.000\n");
    }
    else if (P1<=A && P2>A && P3>A)
    {
        printf("1.000\n");
        printf("0.000\n");
        printf("0.000\n");
    }
    
    else if(P1>A && P2>A){
        printf("1.000\n");
        printf("1.000\n");
        printf("1.000\n");
    }
    else if(P2>A && P3>A){
        printf("1.000\n");
        printf("1.000\n");
        printf("1.000\n");
    }
    else if(P1>A && P3 > A){
        printf("1.000\n");
        printf("1.000\n");
        printf("1.000\n");
    }
    else if(P1<=A && P2<=A && P3>A){
        printf("0.500\n");
        printf("0.500\n");
        printf("0.000\n");
    }
    else if(P1>A && P2<=A && P3<=A){
        printf("0.000\n");
        printf("0.500\n");
        printf("0.500\n");
        
    }
    else if(P1<=A && P2>A && P3<=A){
        printf("0.500\n");
        printf("0.000\n");
        printf("0.500\n");
    }


    else if(P1<=A && P2<=A && P3<=A){
        printf("0.333\n");
        printf("0.333\n");
        printf("0.333\n");
    }
    return 0;
    
}