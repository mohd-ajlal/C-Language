#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int num, i, sum=0;
    scanf("%d", &num);
    for(i = 1; i<=num; i++){
        sum += i;
    }
    printf("%d", sum);  
    return 0;
}