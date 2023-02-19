#include <stdio.h>

int main()
{
    float P1, P2, P3, A;
    float P1_prob, P2_prob, P3_prob;
    
    scanf("%f", &P1);
    
    scanf("%f", &P2);
    
    scanf("%f", &P3);
    
    scanf("%f", &A);
    
    P1_prob = (A - P1) / (A - P1 + A - P2 + A - P3);
    P2_prob = (A - P2) / (A - P1 + A - P2 + A - P3);
    P3_prob = (A - P3) / (A - P1 + A - P2 + A - P3);
    
    printf("Probability of buying first phone: %.3f\n", P1_prob);
    printf("Probability of buying second phone: %.3f\n", P2_prob);
    printf("Probability of buying third phone: %.3f\n", P3_prob);
}